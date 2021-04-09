`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:03:32 11/13/2020 
// Design Name: 
// Module Name:    FullAdder 
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
module FullAdder(A, B, C_I, C_O, S);
	input A;
	input B;
	input C_I;
	output S;
	output C_O;
	
	wire[1:0] ADD;
	assign ADD = A + B + C_I;
	assign S = ADD[0];
	assign C_O = ADD[1];

endmodule
