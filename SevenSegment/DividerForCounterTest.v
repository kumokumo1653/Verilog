`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:02:34 12/11/2020
// Design Name:   DividerForCounter
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/DividerForCounterTest.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DividerForCounter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DividerForCounterTest;

	// Inputs
	reg CLK;

	// Outputs
	wire CE_TEMP;

	// Instantiate the Unit Under Test (UUT)
	DividerForCounter uut (
		.CLK(CLK), 
		.CE_TEMP(CE_TEMP)
	);

	initial CLK <= 0;
	initial begin
		// Initialize Inputs
		
		forever begin
			# 12.5 CLK = ~CLK;
			end

		// Wait 100 ns for global reset to finish
		
        
		// Add stimulus here

	end
      
endmodule

