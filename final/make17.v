`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    06:41:27 02/12/2021 
// Design Name: 
// Module Name:    make17 
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
module make17(input SW17,input ope,input A,input B,output reg [15:0]result,output reg [15:0]acc_status);

	integer count;
	reg A_temp;
	assign Atemp = A;
	
	always @(posedge SW17)
	begin
		
		case(ope)
			2'b00://add
			begin
				result <= A+B;
				acc_status[15:4] <= A+B;
				acc_status[3:0] <= 0;
			end
			2'b01://sub
			begin
				if(A>=B)
				begin
					result <= A-B;
					acc_status[15:4] <= A-B;
					acc_status[3:0] <= 0;
				end else begin
					result <= B-A;
					acc_status[15:4] <= B-A;
					acc_status[3:0] <= 1;
				end
			end
			2'b10://mul
			begin
				for(count = 0; count < B; count = count+1)
				begin
					result <= result + A;
				end
				acc_status[15:4] <= result;
			end
			2'b11://div
			begin
				if(B == 0)
				begin 
					result <= 0;
					acc_status <= 1;
				end else begin
					for(count = 0; A_temp > B; count = count + 1)
					begin
						A_temp <= A_temp - B;
					end
					result <= count;
					acc_status[15:4] <= count;
					acc_status[3:0] <= A;
				end
			end
		endcase
			
	end

endmodule
