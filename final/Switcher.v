`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:18:36 02/12/2021 
// Design Name: 
// Module Name:    Switcher 
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
module Switcher(input [1:0]CLK,output reg D1,output reg D2,output reg D3,output reg D4);

	always @(CLK)
	begin
		case (CLK)
			2'b00: {D1,D2,D3,D4} <= 4'b1000;
			2'b01: {D1,D2,D3,D4} <= 4'b0100;
			2'b10: {D1,D2,D3,D4} <= 4'b0010;
			2'b11: {D1,D2,D3,D4} <= 4'b0001;
		endcase
	end


endmodule
