`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    11:55:02 02/10/2021 
// Design Name: 
// Module Name:    PushReg 
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
module PushReg(A,B);
	input [3:0] A;
	output [3:0] B;
	reg [3:0] B;
	always @ (A)begin
		B <= A;
	end
	

endmodule
