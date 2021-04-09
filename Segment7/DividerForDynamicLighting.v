`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    23:26:44 12/26/2020 
// Design Name: 
// Module Name:    DividerForDynamicLighting 
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
module DividerForDynamicLighting(CLK, CE_OUT);
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

