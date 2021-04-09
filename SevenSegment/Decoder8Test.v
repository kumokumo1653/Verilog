`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:21:47 12/25/2020
// Design Name:   Decoder8
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/Decoder8Test.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Decoder8
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Decoder8Test;

	// Inputs
	reg [3:0] IN;

	// Outputs
	wire [7:0] OUT;

	// Instantiate the Unit Under Test (UUT)
	Decoder8 uut (
		.IN(IN), 
		.OUT(OUT)
	);

	initial begin
		// Initialize Inputs
		IN = 0;

		// Wait 100 ns for global reset to finish
		#100 IN = 4'b0000;
		#100 IN = 4'b0001;
		#100 IN = 4'b0010;
		#100 IN = 4'b0011;
		#100 IN = 4'b0100;
		#100 IN = 4'b0101;
		#100 IN = 4'b0110;
		#100 IN = 4'b0111;
		#100 IN = 4'b1000;
		#100 IN = 4'b1001;
		#100;
		// Add stimulus here

	end
      
endmodule

