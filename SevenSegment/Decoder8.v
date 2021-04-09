`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:03:42 12/25/2020 
// Design Name: 
// Module Name:    Decoder8 
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
module Decoder8(IN, OUT);
	input [3:0]IN;
	output [7:0]OUT;
	
	function [7:0]decode;
		input [3:0]in;
		begin
		case (in)
			0:decode = 8'b11000000;
			1:decode = 8'b11111001;
			2:decode = 8'b10100100;
			3:decode = 8'b10110000;
			4:decode = 8'b10011001;
			5:decode = 8'b10010010;
			6:decode = 8'b10000010;
			7:decode = 8'b11111000;
			8:decode = 8'b10000000;
			9:decode = 8'b10010000;
			default:decode = 8'bXXXXXXXX;
		endcase
	end
	endfunction
	
	assign OUT = decode(IN);
endmodule
