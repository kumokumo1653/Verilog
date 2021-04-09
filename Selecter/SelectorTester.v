`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:42:03 11/20/2020
// Design Name:   Selecter
// Module Name:   C:/Users/fjsda/Studying/FPGA/Selecter/SelectorTester.v
// Project Name:  Selecter
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Selecter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SelectorTester;

	// Inputs
	reg [2:0] A;
	reg [2:0] B;
	reg [2:0] C;
	reg [1:0] SW;

	// Outputs
	wire [2:0] O;
	wire EN;

	// Instantiate the Unit Under Test (UUT)
	Selecter uut (
		.A(A), 
		.B(B), 
		.C(C), 
		.SW(SW), 
		.O(O), 
		.EN(EN)
	);

	initial begin
		// Initialize Inputs
		A = 3'b001;
		B = 3'b010;
		C = 3'b100;
		SW = 2'b00;

		// Wait 100 ns for global reset to finish
		#100;
		#100 SW = 2'b01;
		#100 SW = 2'b10;
		#100 SW = 2'b11;
        
		// Add stimulus here

	end
      
endmodule

