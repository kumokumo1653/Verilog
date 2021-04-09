`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:28:56 02/12/2021 
// Design Name: 
// Module Name:    FS 
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
module FS(input A,input B,input Bi,output reg D,output reg B0);
	
	wire hsD_1,hsB_1,hsB0_2;
	
	HS hs1(.A(A), .B(B), .D(hsD_1), .B0(hsB0_1));
	HS hs2(.A(hsD_1), .B(Bi), .D(D), .B0(hsB0_2));

	assign B0 = hsB0_1 | hsB0_2;


endmodule
