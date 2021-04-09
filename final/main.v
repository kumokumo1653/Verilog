`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    04:47:27 02/12/2021 
// Design Name: 
// Module Name:    main 
// Project Name: 
// Target Devices: 
// Tool versions: 
// Description: 
//
// Dependencies: 
//
// Revision: 
// Revision 0.01 - File Created
// Additional Comments: 
//
//////////////////////////////////////////////////////////////////////////////////
module main(
    input SW1,
	 input SW2,
	 input SW6,
	 input SW7,
	 input SW8,
	 input SW9,
	 input SW12,
	 input SW13,
	 input SW14,
	 input SW15,
	 input SW17,
	 input SW18,
	 input SW22,
	 input CLK,
	 output D1,
	 output D2,
	 output D3,
	 output D4,
	 output D_out1,
	 output D_out2,
	 output D_out3,
	 output D_out4,
	 output D_out5,
	 output D_out6,
	 output D_out7,
	 output D_out8
	 );
	
	wire CE_TMP;
	wire [1:0]S_CLK;
	wire [3:0]CNT;
	wire [3:0]CNT1_TMP;
	wire [3:0]CNT2_TMP;
	wire [3:0]CNT3_TMP;
	wire [3:0]CNT4_TMP;
	wire [7:0]DOUT;
	
	wire [15:0]result;
	wire [15:0]acc_status;
	wire [15:0]init;
	
	
	
	wire [1:0]ope;
	wire [1:0]disp;
	wire [3:0]A;
	wire [3:0]B;
	
	assign ope[1:0] = {SW1,SW2};
	assign disp[1:0] = {SW18,SW22};
	assign A[3:0] = {SW6,SW7,SW8,SW9};
	assign B[3:0] = {SW12,SW13,SW14,SW15};
	
	assign init[15:14] = ope[1:0];
	assign init[7:0] = {A[3:0],B[3:0]};
	
	DivideForDynamicLighting dfdl (.CLK(CLK),.CEOUT(S_CLK));
	Selector select (.CNT1(CNT1_TMP),.CNT2(CNT2_TMP),.CNT3(CNT3_TMP),.CNT4(CNT4_TMP),.SELECT(S_CLK),.CNT(CNT));
	Switcher switch(.CLK(S_CLK),.D1(D1),.D2(D2),.D3(D3),.D4(D4));
	make17 make(.SW17(SW17),.ope(ope),.A(A),.B(B),.result(result),.acc_status(acc_status));
	disp_select show(.disp(disp),.inst(init),.index(result),.acc_status(acc_status),.result1(CNT1_TMP),.result2(CNT2_TMP),.result3(CNT3_TMP),.result4(CNT4_TMP));
	Decoder8 deco8 (.DIN(CNT),.DOUT(DOUT));
	assign {D_out1,D_out2,D_out3,D_out4,D_out5,D_out6,D_out7,D_out8} = DOUT;
	
	
	
				
	

endmodule
