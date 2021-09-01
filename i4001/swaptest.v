`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   11:20:39 08/31/2021
// Design Name:   swap
// Module Name:   C:/Users/kumomomo/Studying/5J/Verilog/i4001/swaptest.v
// Project Name:  i4001
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: swap
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module swaptest;

	// Inputs
	reg [7:0] in;

	// Outputs
	wire [7:0] out;

	// Instantiate the Unit Under Test (UUT)
	swap uut (
		.in(in), 
		.out(out)
	);

	initial begin
		// Initialize Inputs
		in = 8'b11000111;

		// Wait 100 ns for global reset to finish
		#100;
		in = 8'b11110000;
      #100;
		// Add stimulus here

	end
      
endmodule

