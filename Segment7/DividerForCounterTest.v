`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:11:04 01/06/2021
// Design Name:   DividerForCounter
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/DividerForCounterTest.v
// Project Name:  Segment7
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
	wire CE_OUT;

	// Instantiate the Unit Under Test (UUT)
	DividerForCounter uut (
		.CLK(CLK), 
		.CE_OUT(CE_OUT)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		forever begin
			#12.5 CLK = ~CLK;
		end
        
		// Add stimulus here

	end
      
endmodule

