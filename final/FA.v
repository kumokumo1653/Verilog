`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:10:57 02/12/2021 
// Design Name: 
// Module Name:    FA 
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
module FA(input A,input B,input Ci,output reg S,output reg Co);
	
	
	wire S1, C1,C2;
	HA ha1(B,Ci, S1, C1);
	HA ha2(S1, A, S, C2); 
	
	assign Co = C1 ^ C2;
	
endmodule
