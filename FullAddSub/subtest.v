`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:08:07 11/27/2020
// Design Name:   HalfSUB
// Module Name:   C:/Users/fjsda/Studying/FPGA/FullAddSub/subtest.v
// Project Name:  FullAddSub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: HalfSUB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module subtest;

	// Inputs
	reg A;
	reg B;

	// Outputs
	wire B_0;
	wire D;

	// Instantiate the Unit Under Test (UUT)
	HalfSUB uut (
		.A(A), 
		.B(B), 
		.B_0(B_0), 
		.D(D)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;

		// Wait 100 ns for global reset to finish
		#100;
		#100 B = 1;
		#100 B = 0;
			  A = 1;
		#100 B = 1;
		// Add stimulus here

	end
      
endmodule

