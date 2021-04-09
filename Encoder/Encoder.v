`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:12:58 11/13/2020 
// Design Name: 
// Module Name:    Encoder 
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
module Encoder(F, A);
input[3:0] F;
output[1:0] A;
function[1:0] ENC;
	input[3:0] F;
	begin
		case (F)
			4'b0001: ENC = 2'b00;
			4'b0010: ENC = 2'b01;
			4'b0100: ENC = 2'b10;
			4'b1000: ENC = 2'b11;
			default:ENC = 2'bXX;
		endcase
	end
endfunction
assign A = ENC(F);
endmodule
