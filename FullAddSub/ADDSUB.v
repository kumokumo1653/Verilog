`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:49:29 12/03/2020 
// Design Name: 
// Module Name:    ADDSUB 
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
module ADDSUB(A, B, C, D, O1, O2);
	input A;
	input B;
	input C;
	input D;
	output O1;
	output O2;
	wire addo1;
	wire addo2;
	wire subo1;
	wire subo2;
	FullADD FA(.A(A), .B(B), .C_I(C), .C_O(addo2), .S(addo1));
	FullSUB FS(.A(A), .B(B), .B_I(C), .B_O(subo2), .D(subo1));
	
	assign {O1, O2} = select(addo1, addo2, subo1, subo2, D);
	function [2:0]select;
		input addo1;
		input add02;
		input subo1;
		input sub02;
		input sw;
	begin
		case(sw)
			1'b0:select = {~addo1, ~addo2};
			1'b1:select = {~subo1, ~subo2};
		endcase
	end
	endfunction
endmodule
