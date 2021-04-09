`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   19:07:07 12/26/2020
// Design Name:   CounterForDynamicLighting
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/CounterForDynamicLightingTest.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: CounterForDynamicLighting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CounterForDynamicLightingTest;

	// Inputs
	reg CLK;

	// Outputs
	wire [1:0] S_CLK;

	// Instantiate the Unit Under Test (UUT)
	CounterForDynamicLighting uut (
		.CLK(CLK), 
		.S_CLK(S_CLK)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		forever 
			#12.5 CLK = ~CLK;
        
		// Add stimulus here

	end
      
endmodule

