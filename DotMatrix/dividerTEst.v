`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:48:04 06/23/2021
// Design Name:   Divider
// Module Name:   C:/Users/ohike/Studying/Verilog/DotMatrix/dividerTEst.v
// Project Name:  DotMatrix
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

module dividerTEst;

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
		forever
			#12.5 CLK = ~CLK;
        
		// Add stimulus here

	end
      
endmodule

