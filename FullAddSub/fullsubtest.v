`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:03:10 12/03/2020
// Design Name:   FullSUB
// Module Name:   C:/Users/fjsda/Studying/FPGA/FullAddSub/fullsubtest.v
// Project Name:  FullAddSub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: FullSUB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module fullsubtest;

	// Inputs
	reg A;
	reg B;
	reg B_I;

	// Outputs
	wire B_O;
	wire D;

	// Instantiate the Unit Under Test (UUT)
	FullSUB uut (
		.A(A), 
		.B(B), 
		.B_I(B_I), 
		.B_O(B_O), 
		.D(D)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		B_I = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #100 A = 1;
		#100;
		A = 0;
		B = 1;
		#100 A = 1;
		#100;
		A = 0;
		B = 0;
		B_I = 1;
		#100;
      #100 A = 1;
		#100;
		A = 0;
		B = 1;
		#100 A = 1;
		// Add stimulus here

	end
      
endmodule

