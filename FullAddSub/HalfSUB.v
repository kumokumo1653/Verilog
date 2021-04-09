`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:19:45 11/20/2020 
// Design Name: 
// Module Name:    HalfSUB 
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
module HalfSUB(A, B, B_O, D);
	input A;
	input B;
	output D;
	output B_O;
	
	wire[1:0]SUB;
	assign SUB = A - B;
	assign D = SUB[0];
	assign B_O = SUB[1];
	

endmodule
