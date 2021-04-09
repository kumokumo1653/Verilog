`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:22:03 11/27/2020 
// Design Name: 
// Module Name:    DFF 
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
module DFF(D, CLK, Q, QB);
	input D;
	input CLK;
	output Q;
	output QB;
	reg Q = 1'b0;

always @(negedge CLK)
	Q <= D;

assign QB =~ Q;


endmodule
