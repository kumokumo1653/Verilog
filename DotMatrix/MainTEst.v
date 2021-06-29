`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:13:20 06/23/2021
// Design Name:   Main
// Module Name:   C:/Users/ohike/Studying/Verilog/DotMatrix/MainTEst.v
// Project Name:  DotMatrix
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MainTEst;

	// Inputs
	reg [15:0] in_column;
	reg CLK;
	reg IN_CLR;
	reg LOAD;
	reg RESET;

	// Outputs
	wire [3:0] column_seg;
	wire [15:0] out_column;
	wire COLUMN_CLK;
	wire OUT_CLR;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.in_column(in_column), 
		.CLK(CLK), 
		.IN_CLR(IN_CLR), 
		.LOAD(LOAD), 
		.RESET(RESET), 
		.column_seg(column_seg), 
		.out_column(out_column), 
		.COLUMN_CLK(COLUMN_CLK), 
		.OUT_CLR(OUT_CLR)
	);

	initial begin
		// Initialize Inputs
		
		in_column = 16'b1111111111111111;
		CLK = 0;
		IN_CLR = 0;
		LOAD = 0;
		RESET = 0;

	end
	always #1 begin
		CLK = ~CLK;
	end
	
	always #10000 begin
		LOAD = ~LOAD;
	end
endmodule

