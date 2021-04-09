`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:12:44 11/13/2020 
// Design Name: 
// Module Name:    HalfADD 
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
module HalfADD(A, B, C, S);
	input A;
	input B;
	output S;
	output C;
	
	wire[1:0]ADD;
	assign ADD = A + B;
	assign S = ADD[0];
	assign C = ADD[1];


endmodule
