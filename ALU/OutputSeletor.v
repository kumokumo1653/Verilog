`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:13:04 01/22/2021 
// Design Name: 
// Module Name:    OutputSeletor 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module OutputSelector(SW18, SW22, switches, instruction, index, accumulator, status, OUT1, OUT2);
	input SW18, SW22;
	input [7:0]instruction;
	input [7:0]switches;
	input [3:0]index;
	input [3:0]accumulator;
	input [3:0]status;
		
	output [3:0]OUT1;
	output [3:0]OUT2;

	
	function [7:0]switch;
		input [1:0]SW;
		input [7:0]instruction;
		input [7:0]switches;
		input [3:0]index;
		input [3:0]accumulator;
		input [3:0]status;
		begin
			case(SW)
				2'b00: switch = switches;
				2'b01: switch = instruction;
				2'b10: switch = {4'b0000,index};
				2'b11: switch = {status, accumulator};
				default: switch = 8'bXXXXXXXX;
			endcase
		end
	endfunction
	
	assign {OUT2, OUT1} = switch({SW18,SW22}, instruction, switches, index, accumulator, status);
endmodule
