`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   13:39:11 02/12/2021
// Design Name:   main
// Module Name:   C:/Users/wasabi/Desktop/temp/final/final/t_main.v
// Project Name:  final
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: main
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module t_main;

	integer i,j,k;

	// Inputs
	reg SW1;
	reg SW2;
	reg SW6;
	reg SW7;
	reg SW8;
	reg SW9;
	reg SW12;
	reg SW13;
	reg SW14;
	reg SW15;
	reg SW17;
	reg SW18;
	reg SW22;
	reg CLK;

	// Outputs
	wire D1;
	wire D2;
	wire D3;
	wire D4;
	wire D_out1;
	wire D_out2;
	wire D_out3;
	wire D_out4;
	wire D_out5;
	wire D_out6;
	wire D_out7;
	wire D_out8;

	// Instantiate the Unit Under Test (UUT)
	main uut (
		.SW1(SW1), 
		.SW2(SW2), 
		.SW6(SW6), 
		.SW7(SW7), 
		.SW8(SW8), 
		.SW9(SW9), 
		.SW12(SW12), 
		.SW13(SW13), 
		.SW14(SW14), 
		.SW15(SW15), 
		.SW17(SW17), 
		.SW18(SW18), 
		.SW22(SW22), 
		.CLK(CLK), 
		.D1(D1), 
		.D2(D2), 
		.D3(D3), 
		.D4(D4), 
		.D_out1(D_out1), 
		.D_out2(D_out2), 
		.D_out3(D_out3), 
		.D_out4(D_out4), 
		.D_out5(D_out5), 
		.D_out6(D_out6), 
		.D_out7(D_out7), 
		.D_out8(D_out8)
	);

	initial begin
		// Initialize Inputs
		SW1 = 0;
		SW2 = 0;
		SW6 = 0;
		SW7 = 0;
		SW8 = 0;
		SW9 = 1;
		SW12 = 0;
		SW13 = 0;
		SW14 = 0;
		SW15 = 1;
		SW17 = 0;
		SW18 = 0;
		SW22 = 0;
		CLK = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here
		for (i = 0; i < 4;i = i+1)
		begin
			for(j = 0; j < 16; j = j + 1)
			begin
				for(k = 0; k < 16 ; k = k +1)
				begin
				#50;
				CLK = ~CLK;
				SW17 = ~SW17;
				assign {SW12,SW13,SW14,SW15} = k;
				end
			assign {SW6,SW7,SW8,SW9} = j;
			end
			assign {SW1,SW2} = i;
		end
				
		//forever 
		//begin
			//#10;
			//CLK = ~CLK;
			
		//end
				

	end
      
endmodule

