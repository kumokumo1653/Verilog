`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   10:11:18 11/27/2020
// Design Name:   Counter
// Module Name:   C:/Users/fjsda/Studying/FPGA/Counter5/Counttest.v
// Project Name:  Counter5
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Counttest;

	// Inputs
	reg CLK;
	reg RESET;

	// Outputs
	wire [2:0] Q;

	// Instantiate the Unit Under Test (UUT)
	Counter uut (
		.CLK(CLK), 
		.RESET(RESET), 
		.Q(Q)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		forever
			#10 CLK =~ CLK;
		// Wait 100 ns for global reset to finish
        
		// Add stimulus here

	end
	
   initial begin
		
		RESET = 1;
		#300 RESET = 0;
	end
endmodule

