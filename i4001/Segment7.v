`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:36:29 04/09/2021 
// Design Name: 
// Module Name:    segment7 
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
module Segment7(CLK, IN_CLR, D1, D2, D3, D4, PATTERN, DIGIT);
	input CLK, IN_CLR;
	input [3:0]D1;
	input [3:0]D2;
	input [3:0]D3;
	input [3:0]D4;
	output [7:0]PATTERN;
	output [3:0]DIGIT;
	
	reg [7:0]PATTERN = 8'b00000000;
	reg [7:0]ALL_PATTERNS[0:3];
	reg [3:0]DIGIT = 4'b0001;
	reg [3:0]preDIGIT = 4'b0001;
	wire DIVIDED_CLK;
	reg STATUS  = 1'b0;
	
	initial begin
		ALL_PATTERNS[0] = 8'b00000000;
		ALL_PATTERNS[1] = 8'b00000000;
		ALL_PATTERNS[2] = 8'b00000000;
		ALL_PATTERNS[3] = 8'b00000000;
	end
	
	always @ (D1)begin
		ALL_PATTERNS[0] <= decode(D1);
	end
	always @ (D2)begin
		ALL_PATTERNS[1] <= decode(D2);
	end
	always @ (D3) begin
		ALL_PATTERNS[2] <= decode(D3);
	end
	always @ (D4)begin
		ALL_PATTERNS[3] <= decode(D4);
	end
	
	always @ (posedge DIVIDED_CLK) begin
		STATUS <= ~STATUS;
	end
	
	always @ (negedge DIVIDED_CLK) begin
		preDIGIT <= DIGIT;
		if (STATUS == 1 && IN_CLR == 1)begin
			if(DIGIT == 4'b1000) begin
				DIGIT <= 4'b0001;
			end
			else begin
				DIGIT <= DIGIT << 1;
			end

		end
		if(preDIGIT == DIGIT) begin
			PATTERN <= 8'b11111111;
		end else begin
			PATTERN <= ALL_PATTERNS[selector(DIGIT)];
		end
	end
	
	
	
	Seg7Divider seg7divider(.CLK(CLK), .CLK_OUT(DIVIDED_CLK));
	
	function [1:0]selector;
		input [3:0]in;
		begin
		case (in)
			4'b0001:selector = 2'b00;
			4'b0010:selector = 2'b01;
			4'b0100:selector = 2'b10;
			4'b1000:selector = 2'b11;
			default:selector= 2'bXX;
		endcase
	end
	endfunction
	
	function [7:0]decode;
		input [3:0]in;
		begin
		case (in)
			0:decode =  8'b11000000;
			1:decode =  8'b11111001;
			2:decode =  8'b10100100;
			3:decode =  8'b10110000;
			4:decode =  8'b10011001;
			5:decode =  8'b10010010;
			6:decode =  8'b10000010;
			7:decode =  8'b11111000;
			8:decode =  8'b10000000;
			9:decode =  8'b10010000;
			10:decode = 8'b10001000;
			11:decode = 8'b10000011;
			12:decode = 8'b11000110;
			13:decode = 8'b10100001;
			14:decode = 8'b10000110;
			15:decode = 8'b10001110;
			default:decode = 8'b11111111;
		endcase
	end
	endfunction
endmodule
