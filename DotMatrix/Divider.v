`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:41:24 06/18/2021 
// Design Name: 
// Module Name:    Divider 
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
module Divider(CLK, CLK_OUT);
	input CLK;
	output CLK_OUT;
	reg[14:0] Q = 15'b000_0000_0000_0000;
	reg CLK_OUT = 1'b0;
	always @(posedge CLK) begin
		if(Q == 2000) begin
			Q <= 15'b000_0000_0000_0000;
			CLK_OUT <= ~CLK_OUT;
		end
		else
			Q <= Q + 15'b000_0000_0000_0001;
	end

endmodule