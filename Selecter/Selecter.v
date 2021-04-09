`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:53:11 11/13/2020 
// Design Name: 
// Module Name:    Selecter 
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
module Selecter(A, B, C, SW, O, EN);
	input [2:0] A;
	input [2:0] B;
	input [2:0] C;
	input [1:0] SW;
	output [2:0] O;
	output EN;
	
	assign{EN, O} = SEL(A, B, C, SW);
	
	function [3:0] SEL;
	input[2:0] A;
	input[2:0] B;
	input[2:0] C;
	input[1:0] SW;
		begin
			case(SW)
				2'b00:SEL = 4'b0XXX;
				2'b01:SEL = {4'b1, A};
				2'b10:SEL = {4'b1, B};
				2'b11:SEL = {4'b1, C};
			endcase
		end
	endfunction

		

endmodule
