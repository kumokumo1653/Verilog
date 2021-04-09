`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   16:35:40 01/06/2021
// Design Name:   Counter
// Module Name:   C:/Users/fjsda/Studying/FPGA/Segment7/CounterTest.v
// Project Name:  Segment7
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Counter
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module CounterTest;

	// Inputs
	reg CE;
	reg RESET;
	reg REVERSE;

	// Outputs
	wire [3:0] CNT1;
	wire [3:0] CNT2;
	wire [3:0] CNT3;

	// Instantiate the Unit Under Test (UUT)
	Counter uut (
		.CE(CE), 
		.RESET(RESET), 
		.REVERSE(REVERSE), 
		.CNT1(CNT1), 
		.CNT2(CNT2), 
		.CNT3(CNT3)
	);

	initial begin
		// Initialize Inputs
		CE = 0;
		RESET = 0;
		REVERSE = 0;

		// Wait 100 ns for global reset to finish
		forever begin
			#10 CE = ~CE;
		end
      
		// Add stimulus here
	end
   initial begin
			#111 	RESET = 1;
			#20	RESET = 0;
	end
	initial begin
			#10500 	REVERSE = 1;
			#10500	REVERSE = 0;
	end
endmodule

