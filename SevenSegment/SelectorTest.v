`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   22:25:50 12/25/2020
// Design Name:   Selector
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/SelectorTest.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Selector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SelectorTest;

	// Inputs
	reg [1:0]SW;
	reg [3:0] CNT1;
	reg [3:0] CNT2;
	reg [3:0] CNT3;


	// Outputs
	wire [3:0] CNT;

	// Instantiate the Unit Under Test (UUT)
	Selector uut (
		.SW(SW), 
		.CNT1(CNT1), 
		.CNT2(CNT2), 
		.CNT3(CNT3), 
		.CNT(CNT)
	);

	initial begin
		// Initialize Inputs
		SW = 2'b00;
		CNT1 = 4'b0011;
		CNT2 = 4'b1100;
		CNT3 = 4'b1010;

		// Wait 100 ns for global reset to finish
		#100;
      SW = 2'b01;
		CNT1 = 4'b0011;
		CNT2 = 4'b1100;
		CNT3 = 4'b1010;
		#100;
		SW = 2'b10;
		CNT1 = 4'b0011;
		CNT2 = 4'b1100;
		CNT3 = 4'b1010;
		#100;
		// Add stimulus here

	end
      
endmodule

