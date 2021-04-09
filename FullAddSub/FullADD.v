`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:14:34 11/13/2020 
// Design Name: 
// Module Name:    FullADD 
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
module FullADD(A, B, C_I, C_O, S);
	input A;
	input B;
	input C_I;
	output C_O;
	output S;
	
	wire HA1_S;
	wire HA1_C;
	wire HA2_C;
	HalfADD HA1(.A(A), .B(B), .C(HA1_C), .S(HA1_S));
	HalfADD HA2(.A(C_I), .B(HA1_S), .C(HA2_C), .S(S));
	
	
	assign C_O = HA2_C | HA1_C;
endmodule
