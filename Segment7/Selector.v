`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:30:22 12/26/2020 
// Design Name: 
// Module Name:    Selector 
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
module Selector(SW, CNT1, CNT2, CNT3, CNT4, CNT);
	input [3:0]CNT1;
	input [3:0]CNT2;
	input [3:0]CNT3;
	input [3:0]CNT4;
	input [1:0]SW;
	output [3:0]CNT;
	function [3:0]switch;
		input [3:0]temp1;
		input [3:0]temp2;
		input [3:0]temp3;
		input [3:0]temp4;
		input [1:0]SW;
		begin
		case (SW)
			2'b00:switch = temp1;
			2'b01:switch = temp2;
			2'b10:switch = temp3;
			2'b11:switch = temp4;
			default:switch = 4'bXXXX;
		endcase
	end
	endfunction
	
	assign CNT = switch(CNT1, CNT2, CNT3, CNT4, SW);

endmodule
