`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    10:18:47 07/16/2021 
// Design Name: 
// Module Name:    SelectorRom 
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
module SelectorRom(selector, mode, column);
	input [3:0]selector;
	input [1:0]mode;//0...input 1...run 2...debug
	output [15:0]column;
	
	reg [15:0]column = 16'b0000_0000_0000_0000;
	always @ (selector or mode)begin
		if(mode == 0)begin
			case(selector)
				4'b0000: column <= 16'b0000_0000_0000_0001;
				4'b0001: column <= 16'b0000_0000_0000_0010;
				4'b0010: column <= 16'b0000_0000_0000_0100;
				4'b0011: column <= 16'b0000_0000_0000_1000;
				4'b0100: column <= 16'b0000_0000_0001_0000;
				4'b0101: column <= 16'b0000_0000_0010_0000;
				4'b0110: column <= 16'b0000_0000_0100_0000;
				4'b0111: column <= 16'b0000_0000_1000_0000;
				4'b1000: column <= 16'b0000_0001_0000_0000;
				4'b1001: column <= 16'b0000_0010_0000_0000;
				4'b1010: column <= 16'b0000_0100_0000_0000;
				4'b1011: column <= 16'b0000_1000_0000_0000;
				4'b1100: column <= 16'b0001_0000_0000_0000;
				4'b1101: column <= 16'b0010_0000_0000_0000;
				4'b1110: column <= 16'b0100_0000_0000_0000;
				4'b1111: column <= 16'b1000_0000_0000_0000;
				default: column <= 16'b0000_0000_0000_0000;
			endcase
		end else begin
			column <= 16'b0000_0000_0000_0000;
		end
	end
endmodule
