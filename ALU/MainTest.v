`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   01:29:17 02/09/2021
// Design Name:   Main
// Module Name:   C:/Users/fjsda/Studying/FPGA/ALU/MainTest.v
// Project Name:  ALU
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: Main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module MainTest;

	// Inputs
	reg CLK;
	reg SW1;
	reg SW2;
	reg SW3;
	reg SW4;
	reg SW5;
	reg SW6;
	reg SW7;
	reg SW8;
	reg SW17;
	reg SW18;
	reg SW22;

	// Outputs
	wire [7:0] DOUT;
	wire SIG1;
	wire SIG2;

	// Instantiate the Unit Under Test (UUT)
	Main uut (
		.CLK(CLK), 
		.SW1(SW1), 
		.SW2(SW2), 
		.SW3(SW3), 
		.SW4(SW4), 
		.SW5(SW5), 
		.SW6(SW6), 
		.SW7(SW7), 
		.SW8(SW8), 
		.SW17(SW17), 
		.SW18(SW18), 
		.SW22(SW22), 
		.DOUT(DOUT), 
		.SIG1(SIG1), 
		.SIG2(SIG2)
	);

	initial begin
		// Initialize Inputs
		CLK = 0;
		SW1 = 0;
		SW2 = 0;
		SW3 = 1;
		SW4 = 0;
		SW5 = 0;
		SW6 = 0;
		SW7 = 0;
		SW8 = 0;
		SW17 = 0;
		SW18 = 1;
		SW22 = 1;
		
		forever begin
			#1 CLK = ~CLK;
		end
		
	end
	
	initial begin
		#10;
		//‘¦’l
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b00011101;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//indexLOAD
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b00100000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//‘¦’l
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b00010111;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//ADD
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b01000000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//SUB
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b01010000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//NOT
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b01100000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//AND
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b01110000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//OR
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b10000000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//XOR
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b10010000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
		//write
		{SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8} = 8'b00110000;
		SW17 = ~SW17;
		#10;
		SW17 = ~SW17;
		#10;
	end
      
endmodule

