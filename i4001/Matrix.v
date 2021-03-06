`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:36:25 06/18/2021 
// Design Name: 
// Module Name:    Matrix 
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
module Matrix(column_id, in_column, CLK, IN_CLR, LOAD, RESET, column_seg, out_column, COLUMN_CLK, OUT_CLR);
	input [4:0]column_id;
	input [15:0]in_column;
	input CLK, IN_CLR, LOAD, RESET;
	output COLUMN_CLK, OUT_CLR;
	output [3:0]column_seg;
	output [15:0]out_column;

	reg [3:0] column_seg;
	reg [15:0] drawing_column_pattern = 16'b0000_0000_0000_0000;
	reg [4:0] drawing_column_id = 5'b00000;
	reg [15:0] pattern1[0:7];
	reg [15:0] pattern2[0:7];
	reg [15:0] pattern3[0:7];
	reg [15:0] pattern4[0:7];
	reg status = 1;

	//init 
	initial begin
		pattern1[0] = 16'b0000_0000_0000_0000;
		pattern1[1] = 16'b0000_0000_0000_0000;
		pattern1[2] = 16'b0000_0000_0000_0000;
		pattern1[3] = 16'b0000_0000_0000_0000;
		pattern1[4] = 16'b0000_0000_0000_0000;
		pattern1[5] = 16'b0000_0000_0000_0000;
		pattern1[6] = 16'b0000_0000_0000_0000;
		pattern1[7] = 16'b0000_0000_0000_0000;
		pattern2[0] = 16'b0000_0000_0000_0000;
		pattern2[1] = 16'b0000_0000_0000_0000;
		pattern2[2] = 16'b0000_0000_0000_0000;
		pattern2[3] = 16'b0000_0000_0000_0000;
		pattern2[4] = 16'b0000_0000_0000_0000;
		pattern2[5] = 16'b0000_0000_0000_0000;
		pattern2[6] = 16'b0000_0000_0000_0000;
		pattern2[7] = 16'b0000_0000_0000_0000;
		pattern3[0] = 16'b0000_0000_0000_0000;
		pattern3[1] = 16'b0000_0000_0000_0000;
		pattern3[2] = 16'b0000_0000_0000_0000;
		pattern3[3] = 16'b0000_0000_0000_0000;
		pattern3[4] = 16'b0000_0000_0000_0000;
		pattern3[5] = 16'b0000_0000_0000_0000;
		pattern3[6] = 16'b0000_0000_0000_0000;
		pattern3[7] = 16'b0000_0000_0000_0000;
		pattern4[0] = 16'b0000_0000_0000_0000;
		pattern4[1] = 16'b0000_0000_0000_0000;
		pattern4[2] = 16'b0000_0000_0000_0000;
		pattern4[3] = 16'b0000_0000_0000_0000;
		pattern4[4] = 16'b0000_0000_0000_0000;
		pattern4[5] = 16'b0000_0000_0000_0000;
		pattern4[6] = 16'b0000_0000_0000_0000;
		pattern4[7] = 16'b0000_0000_0000_0000;
	end

	wire Divided_CLK;

	assign OUT_CLR = (IN_CLR | RESET);
	assign COLUMN_CLK = status;
	assign out_column = drawing_column_pattern;
	MatrixDivider matrixdivider(.CLK(CLK), .CLK_OUT(Divided_CLK));

	always @ (posedge LOAD or posedge RESET) begin
		if(RESET == 1'b1)begin
			pattern1[0] <= 16'b0000_0000_0000_0000;
			pattern1[1] <= 16'b0000_0000_0000_0000;
			pattern1[2] <= 16'b0000_0000_0000_0000;
			pattern1[3] <= 16'b0000_0000_0000_0000;
			pattern1[4] <= 16'b0000_0000_0000_0000;
			pattern1[5] <= 16'b0000_0000_0000_0000;
			pattern1[6] <= 16'b0000_0000_0000_0000;
			pattern1[7] <= 16'b0000_0000_0000_0000;
			pattern2[0] <= 16'b0000_0000_0000_0000;
			pattern2[1] <= 16'b0000_0000_0000_0000;
			pattern2[2] <= 16'b0000_0000_0000_0000;
			pattern2[3] <= 16'b0000_0000_0000_0000;
			pattern2[4] <= 16'b0000_0000_0000_0000;
			pattern2[5] <= 16'b0000_0000_0000_0000;
			pattern2[6] <= 16'b0000_0000_0000_0000;
			pattern2[7] <= 16'b0000_0000_0000_0000;
			pattern3[0] <= 16'b0000_0000_0000_0000;
			pattern3[1] <= 16'b0000_0000_0000_0000;
			pattern3[2] <= 16'b0000_0000_0000_0000;
			pattern3[3] <= 16'b0000_0000_0000_0000;
			pattern3[4] <= 16'b0000_0000_0000_0000;
			pattern3[5] <= 16'b0000_0000_0000_0000;
			pattern3[6] <= 16'b0000_0000_0000_0000;
			pattern3[7] <= 16'b0000_0000_0000_0000;
			pattern4[0] <= 16'b0000_0000_0000_0000;
			pattern4[1] <= 16'b0000_0000_0000_0000;
			pattern4[2] <= 16'b0000_0000_0000_0000;
			pattern4[3] <= 16'b0000_0000_0000_0000;
			pattern4[4] <= 16'b0000_0000_0000_0000;
			pattern4[5] <= 16'b0000_0000_0000_0000;
			pattern4[6] <= 16'b0000_0000_0000_0000;
			pattern4[7] <= 16'b0000_0000_0000_0000;
		end else begin
			if({column_id[4], column_id[3]} == 0)begin
				pattern1[{column_id[2],column_id[1],column_id[0]}] <= in_column;
			end

			if({column_id[4], column_id[3]} == 1)begin
				pattern2[{column_id[2],column_id[1],column_id[0]}] <= in_column;
			end

			if({column_id[4], column_id[3]} == 2)begin
				pattern3[{column_id[2],column_id[1],column_id[0]}] <= in_column;
			end

			if({column_id[4], column_id[3]} == 3)begin
				pattern4[{column_id[2],column_id[1],column_id[0]}] <= in_column;
			end
		end
	end


	always @ (posedge Divided_CLK) begin
			status <= ~status;
	end
	
	always @ (negedge Divided_CLK) begin
		if(status == 1) begin
			
			if(drawing_column_id < 8)begin
				drawing_column_pattern <= pattern1[convert({drawing_column_id[2], drawing_column_id[1], drawing_column_id[0]})];
			end else if(drawing_column_id < 16)begin
				drawing_column_pattern <= pattern2[convert({drawing_column_id[2], drawing_column_id[1], drawing_column_id[0]})];
			end else if(drawing_column_id < 24)begin
				drawing_column_pattern <= pattern3[convert({drawing_column_id[2], drawing_column_id[1], drawing_column_id[0]})];
			end else if(drawing_column_id < 32)begin
				drawing_column_pattern <= pattern4[convert({drawing_column_id[2], drawing_column_id[1], drawing_column_id[0]})];
			end
			
			if(drawing_column_id == 31)begin
				column_seg <= 4'b1110;
			end else if(drawing_column_id == 7)begin
				column_seg <= 4'b1101;
			end else if(drawing_column_id == 15)begin
				column_seg <= 4'b1011;
			end else if(drawing_column_id == 23)begin
				column_seg <= 4'b0111;
			end else begin
				column_seg <= 4'b1111;
			end
			drawing_column_id <= drawing_column_id + 5'b00001;
			
			if(drawing_column_id == 32) begin
				drawing_column_id <= 5'b00000;
			end
			
		end else begin
				drawing_column_pattern <= 16'b0000_0000_0000_0000;
		end
	end

	
	function [2:0]convert;
		input [2:0]in;
		begin
		case (in)
			3'b000:convert = 3'b111;
			3'b001:convert = 3'b110;
			3'b010:convert = 3'b001;
			3'b011:convert = 3'b010;
			3'b100:convert = 3'b000;
			3'b101:convert = 3'b100;
			3'b110:convert = 3'b101;
			3'b111:convert = 3'b011;
			default:convert= 3'bXXX;
		endcase
		end
	endfunction
	
endmodule
