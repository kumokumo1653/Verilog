`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:51:58 06/21/2021 
// Design Name: 
// Module Name:    Main 
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
module Main(in_column, CLK, IN_CLR, LOAD, RESET, column_seg, out_column, COLUMN_CLK, OUT_CLR);

	input [15:0]in_column;
	input CLK, IN_CLR, LOAD, RESET;
	output COLUMN_CLK, OUT_CLR;
	output [3:0]column_seg;
	output [15:0]out_column;
	reg[4:0]column_id = 5'b00000;
	
	Matrix matrix(.column_id(column_id), .in_column(in_column), .CLK(CLK), .IN_CLR(IN_CLR), .LOAD(LOAD), .RESET(RESET), .column_seg(column_seg), .out_column(out_column), .COLUMN_CLK(COLUMN_CLK), .OUT_CLR(OUT_CLR));
endmodule
