`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:27:36 02/12/2021 
// Design Name: 
// Module Name:    HS 
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
module HS(input A,input B,output reg D,output reg B0);
	
	wire x,y,Bb,Ab;
	assign Bb = ~B;
	assign Ab = ~A;
	
	assign x = A&Bb;
	assign y = B&Ab;
	
	assign D = x|y;
	assign B0 = y;

endmodule
