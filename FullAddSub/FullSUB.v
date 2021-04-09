`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:45:56 11/27/2020 
// Design Name: 
// Module Name:    FullSUB 
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
module FullSUB(A, B, B_I, B_O, D);
	input A;
	input B;
	input B_I;
	output B_O;
	output D;
	
	wire HS1_D;
	wire HS1_B;
	wire HS2_B;
	HalfSUB HS1(.A(A), .B(B), .B_O(HS1_B), .D(HS1_D));
	HalfSUB HS2(.A(HS1_D), .B(B_I), .B_O(HS2_B), .D(D));
	
	assign B_O = HS1_B ^ HS2_B;

endmodule
