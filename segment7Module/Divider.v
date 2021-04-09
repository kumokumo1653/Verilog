`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:48:00 04/09/2021 
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
	output CE_OUT;
	reg[14:0] Q = 15'b000_0000_0000_0000;
	reg CE_OUT = 1'b0;
	always @(posedge CLK) begin
		if(Q == 20000) begin
			Q <= 15'b000_0000_0000_0000;
			CE_OUT <= ~CE_OUT;
		end
		else
			Q <= Q + 15'b000_0000_0000_0001;
	end

endmodule
