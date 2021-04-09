`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   00:00:26 02/09/2021
// Design Name:   DividerForDynamicLighting
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/DividerForDynamicLightingTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DividerForDynamicLighting
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DividerForDynamicLightingTest;

	// Inputs
	reg CLK;

	// Outputs
	wire CE_OUT;

	// Instantiate the Unit Under Test (UUT)
	DividerForDynamicLighting uut (
		.CLK(CLK), 
		.CE_OUT(CE_OUT)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		forever begin
			#12.5 CLK = ~CLK;
		end
      
	end
	
endmodule

