`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:27:00 01/06/2021
// Design Name:   DividerForDynamicLighting
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/DividerForDynamicLightingTest.v
// Project Name:  Segment7
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
	wire CE_OUT;

	// Instantiate the Unit Under Test (UUT)
	DividerForDynamicLighting uut (
		.CLK(CLK), 
		.CE_OUT(CE_OUT)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		
		forever begin
			#12.5 CLK = ~CLK;
		end
        
		// Add stimulus here

	end
      
endmodule

