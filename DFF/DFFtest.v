`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:27:50 11/27/2020
// Design Name:   DFF
// Module Name:   C:/Users/fjsda/Studying/FPGA/DFF/DFFtest.v
// Project Name:  DFF
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: DFF
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module DFFtest;

	// Inputs
	reg D;
	reg CLK;

	// Outputs
	wire Q;
	wire QB;

	// Instantiate the Unit Under Test (UUT)
	DFF uut (
		.D(D), 
		.CLK(CLK), 
		.Q(Q), 
		.QB(QB)
	);

	initial begin
		CLK = 1;
		forever
			#10 CLK =~ CLK;
	end
	
	initial begin
		D = 0;
		#7 D = 1;
		#8 D = 0;
		#17 D = 1;
		#10 D = 0;
		#10 D = 1;
		#3 D = 0;
		#12 D = 1;
	end
      
endmodule

