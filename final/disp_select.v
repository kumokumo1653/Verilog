`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:01:48 02/12/2021 
// Design Name: 
// Module Name:    disp_select 
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
module disp_select(input [1:0]disp,input [15:0]inst,input [15:0]index,input [15:0]acc_status,
output reg [3:0]result1,output reg [3:0]result2,output reg [3:0]result3,output reg [3:0]result4);

	always @(disp)
	begin 
		case (disp) 
			2'b0X: 
				begin 
					 result1 <= inst[3:0];
					 result2 <= inst[7:4];
					 result3 <= inst[11:8];
					 result4 <= inst[15:12];
				end
			2'b10: 
				begin 
					 result1 <= index[3:0];
					 result2 <= index[7:4];
					 result3 <= index[11:8];
					 result4 <= index[15:12];
				end
			2'b11: 
				begin 
					 result1 <= acc_status[3:0];
					 result2 <= acc_status[7:4];
					 result3 <= acc_status[11:8];
					 result4 <= acc_status[15:12];
				end
			default: 
				begin 
					 result1 <= 0;
					 result2 <= 0;
					 result3 <= 0;
					 result4 <= 0;
				end
		endcase
	end

endmodule
