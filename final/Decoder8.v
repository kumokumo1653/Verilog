`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    05:13:37 02/12/2021 
// Design Name: 
// Module Name:    Decoder8 
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
module Decoder8(input [3:0]DIN,output reg [7:0]DOUT);

	always @(DIN)
	begin
		case(DIN)
			4'b0000: DOUT <=  ~8'b11111100;
			4'b0001:	DOUT <=  ~8'b01100000;
			4'b0010:	DOUT <=  ~8'b11011010;
			4'b0011:	DOUT <=  ~8'b11110010;
			4'b0100:	DOUT <=  ~8'b01100110;
			4'b0101:	DOUT <=  ~8'b10110110;
			4'b0110:	DOUT <=  ~8'b10111110;
			4'b0111:	DOUT <=  ~8'b11100000;
			4'b1000:	DOUT <=  ~8'b11111110;
			4'b1001:	DOUT <=  ~8'b11100110;
			4'b1010: DOUT <=	~8'b11011110;
			4'b1011: DOUT <=	~8'b11101110;
			4'b1100: DOUT <=	~8'b11111000;
			4'b1101: DOUT <=	~8'b10111101;
			4'b1110: DOUT <=	~8'b11110010;
			4'b1111: DOUT <=	~8'b11100010;
			default: DOUT <=  ~8'b00000000;
		endcase
	end



endmodule
