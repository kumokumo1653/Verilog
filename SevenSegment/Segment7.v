`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:16:07 12/26/2020 
// Design Name: 
// Module Name:    Segment7 
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
module Segment7(CLK, RESET, REVERSE, D1, D2, D3, DOUT);
	input CLK;
	input RESET;
	input REVERSE;
	output [7:0]DOUT;
	output D1;
	output D2;
	output D3;
	
	wire CE_TEMP;
	wire S_CLK;
	wire [1:0]SIG;
	wire [3:0]CNT1_TEMP;
	wire [3:0]CNT2_TEMP;
	wire [3:0]CNT3_TEMP;
	wire [3:0]CNT;
	
	DividerForCounter DFC(.CLK(CLK), .CE_OUT(CE_TEMP));
	DividerForDynamicLighting DFDL(.CLK(CLK), .CE_OUT(S_CLK));
	Counter100 Counter(.CE(CE_TEMP), .RESET(RESET), .REVERSE(REVERSE), .CNT1(CNT1_TEMP), .CNT2(CNT2_TEMP), .CNT3(CNT3_TEMP));
	CounterForDynamicLighting CFDL(.CLK(S_CLK), .S_CLK(SIG));
	Selector selector(.SW(SIG), .CNT1(CNT1_TEMP), .CNT2(CNT2_TEMP), .CNT3(CNT3_TEMP), .CNT(CNT));
	Switcher switcher(.CLK(SIG), .D1(D1), .D2(D2), .D3(D3));
	Decoder8 decoder8(.IN(CNT), .OUT(DOUT));
endmodule
