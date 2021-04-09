`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   15:00:43 12/03/2020
// Design Name:   ADDSUB
// Module Name:   C:/Users/fjsda/Studying/FPGA/FullAddSub/addsubtest.v
// Project Name:  FullAddSub
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: ADDSUB
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module addsubtest;

	// Inputs
	reg A;
	reg B;
	reg C;
	reg D;

	// Outputs
	wire O1;
	wire O2;

	// Instantiate the Unit Under Test (UUT)
	ADDSUB uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.D(D), 
		.O1(O1), 
		.O2(O2)
	);

	initial begin
		// Initialize Inputs
		A = 0;
		B = 0;
		C = 0;
		D = 0;

		// Wait 100 ns for global reset to finish
		#100;
      #100 A = 1;
		#100;
		B = 1;
		A = 0;
		#100 A = 1;
		#100;
		A = 0;
		B = 0;
		C = 1;
		#100 A = 1;
		#100;
		B = 1;
		A = 0;
		#100 A = 1;
		
		//sub
		#100;
		A = 0;
		B = 0;
		C = 0;
		D = 1;
		#100 A = 1;
		#100;
		B = 1;
		A = 0;
		#100 A = 1;
		#100;
		A = 0;
		B = 0;
		C = 1;
		#100 A = 1;
		#100;
		B = 1;
		A = 0;
		#100 A = 1;
		// Add stimulus here

	end
      
endmodule

