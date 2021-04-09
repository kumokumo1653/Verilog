`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   09:22:10 12/25/2020
// Design Name:   Counter100
// Module Name:   C:/Users/fjsda/Studying/FPGA/SevenSegment/Counter100Test.v
// Project Name:  SevenSegment
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Counter100
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module Counter100Test;

	// Inputs
	reg CE;
	reg RESET;
	reg REVERSE;

	// Outputs
	wire [3:0] CNT1;
	wire [3:0] CNT2;
	wire [3:0] CNT3;

	// Instantiate the Unit Under Test (UUT)
	Counter100 uut (
		.CE(CE), 
		.RESET(RESET), 
		.REVERSE(REVERSE),
		.CNT1(CNT1), 
		.CNT2(CNT2),
		.CNT3(CNT3)
	);

	// Initialize Inputs
		
		//initial begin
		// Initialize Inputs
		initial begin
			CE = 0;
			RESET = 0;
			REVERSE = 1;
			forever begin
				# 12.5 CE = ~CE;
			end
		end
		
		
		initial begin
			#12234 RESET = 1;
			#23454	RESET = 0;
		end
		
        
		// Add stimulus here
		
      
endmodule

