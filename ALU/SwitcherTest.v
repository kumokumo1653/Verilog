`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:31:29 02/08/2021
// Design Name:   Switcher
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/SwitcherTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Switcher
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SwitcherTest;

	// Inputs
	reg CLK;

	// Outputs
	wire D1;
	wire D2;

	// Instantiate the Unit Under Test (UUT)
	Switcher uut (
		.CLK(CLK), 
		.D1(D1), 
		.D2(D2)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
		CLK = 1;
		#100;
        
		// Add stimulus here

	end
      
endmodule

