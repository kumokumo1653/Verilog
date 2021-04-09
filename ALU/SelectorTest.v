`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   23:33:39 02/08/2021
// Design Name:   Selector
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/SelectorTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Selector
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module SelectorTest;

	// Inputs
	reg SW;
	reg [3:0] CNT1;
	reg [3:0] CNT2;

	// Outputs
	wire [3:0] CNT;

	// Instantiate the Unit Under Test (UUT)
	Selector uut (
		.SW(SW), 
		.CNT1(CNT1), 
		.CNT2(CNT2), 
		.CNT(CNT)
	);

	initial begin
		// Initialize Inputs
		SW = 0;
		CNT1 = 4'b1100;
		CNT2 = 4'b0011;

		// Wait 100 ns for global reset to finish
		#100;
		
		SW = 1;
		#100;
        
		// Add stimulus here

	end
      
endmodule

