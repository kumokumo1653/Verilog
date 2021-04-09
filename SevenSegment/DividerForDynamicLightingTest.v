`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:03:36 12/25/2020
// Design Name:   DividerForDynamicLighting
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/DividerForDynamicLightingTest.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DividerForDynamicLighting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DividerForDynamicLightingTest;

	// Inputs
	reg CLK;

	// Outputs
	wire CE_TEMP;

	// Instantiate the Unit Under Test (UUT)
	DividerForDynamicLighting uut (
		.CLK(CLK), 
		.CE_TEMP(CE_TEMP)
	);

		// Initialize Inputs
		initial CLK <= 0;
		initial begin
		// Initialize Inputs
		
		forever begin
			# 12.5 CLK = ~CLK;
			end
		// Add stimulus here

	end
      
endmodule

