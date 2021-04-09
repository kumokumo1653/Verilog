`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:40:18 12/11/2020 
// Design Name: 
// Module Name:    DividerForCounter 
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
module DividerForCounter(CLK, CE_OUT);
	input CLK;
	output CE_OUT;
	reg[24:0] Q = 25'b0_0000_0000_0000_0000_0000_0000;
	reg CE_OUT = 1'b0;
	always @(posedge CLK) begin
		if(Q == 20000000) begin
			Q <= 25'b0_0000_0000_0000_0000_0000_0000;
			CE_OUT <= ~CE_OUT;
		end
		else
			Q <= Q + 25'b0_0000_0000_0000_0000_0000_0001;
	end
endmodule
