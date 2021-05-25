`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:15:04 04/30/2021
// Design Name:   Divider
// Module Name:   C:/Users/fjsda/Studying/Verilog/segment7Module/dividerTest.v
// Project Name:  segment7Module
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Divider
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module dividerTest;

	// Inputs
	reg CLK;

	// Outputs
	wire CLK_OUT;

	// Instantiate the Unit Under Test (UUT)
	Divider uut (
		.CLK(CLK), 
		.CLK_OUT(CLK_OUT)
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

