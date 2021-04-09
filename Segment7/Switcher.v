`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:31:16 12/26/2020 
// Design Name: 
// Module Name:    Switcher 
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
module Switcher(CLK, D1, D2, D3, D4);
	input [1:0]CLK;
	output D1;
	output D2;
	output D3;
	output D4;
	
	function [3:0]switch;
		input [1:0]SW;
		begin
		case (SW)
			2'b00:switch = 4'b1000;
			2'b01:switch = 4'b0100;
			2'b10:switch = 4'b0010;
			2'b11:switch = 4'b0001;
			default:switch = 4'bXXXX;
		endcase
	end
	endfunction
	
	assign {D1, D2, D3, D4} = switch(CLK);
endmodule