`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:09:40 12/25/2020 
// Design Name: 
// Module Name:    Counter100 
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
module Counter100(CE, RESET, REVERSE, CNT1, CNT2, CNT3);
	input CE;
	input RESET;
	input REVERSE;
	output [3:0]CNT1;
	output [3:0]CNT2;
	output [3:0]CNT3;
	
	reg [3:0] CNT1 = 4'b0000;
	reg [3:0] CNT2 = 4'b0000;
	reg [3:0] CNT3 = 4'b0000;
	
	always @(posedge CE) begin
		if(REVERSE)begin
			if(RESET) begin
				CNT1 <= 4'b1001;
				CNT2 <= 4'b1001;
				CNT3 <= 4'b1001;

			end
			else if(CNT1 == 0) begin
				CNT1 <= 4'b1001;
				CNT2 <= CNT2 - 4'b0001;
				if (CNT2 == 0) begin
					CNT1 <= 4'b1001;
					CNT2 <= 4'b1001;
					CNT3 <= CNT3 - 4'b0001;
					if (CNT3 == 0) begin
						CNT1 <= 4'b1001;
						CNT2 <= 4'b1001;
						CNT3 <= 4'b1001;
					end
				end
			end
			else begin
				CNT1 <= CNT1 - 4'b0001;
			end
		end
		else begin
				if(RESET) begin
				CNT1 <= 4'b0000;
				CNT2 <= 4'b0000;
				CNT3 <= 4'b0000;

			end
			else if(CNT1 == 9) begin
				CNT1 <= 4'b0000;
				CNT2 <= CNT2 + 4'b0001;
				if (CNT2 == 9) begin
					CNT1 <= 4'b0000;
					CNT2 <= 4'b0000;
					CNT3 <= CNT3 + 4'b0001;
					if (CNT3 == 9) begin
						CNT1 <= 4'b0000;
						CNT2 <= 4'b0000;
						CNT3 <= 4'b0000;
					end
				end
			end
			else begin
				CNT1 <= CNT1 + 4'b0001;
			end
		end
	end
endmodule
