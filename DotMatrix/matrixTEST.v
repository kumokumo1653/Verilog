`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:00:09 06/23/2021
// Design Name:   Matrix
// Module Name:   C:/Users/ohike/Studying/Verilog/DotMatrix/matrixTEST.v
// Project Name:  DotMatrix
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Matrix
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module matrixTEST;

	// Inputs
	reg [4:0] column_id;
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
	Matrix uut (
		.column_id(column_id), 
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
		column_id = 5'b00000;
		in_column = 16'b0000000000000000;
		CLK = 0;
		IN_CLR = 0;
		LOAD = 0;
		RESET = 1;

		// Wait 100 ns for global reset to finish
		forever
			#1 CLK = ~CLK;
       
		 #100 LOAD = 1;
		// Add stimulus here

	end
      
endmodule

