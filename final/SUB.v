`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    07:30:36 02/12/2021 
// Design Name: 
// Module Name:    SUB 
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
module SUB(input [3:0]A,input [3:0]B,output reg [15:0]result,output reg [15:0]acc_status);

	wire D;
	wire Bi;
	wire Bo;
	integer i;
	
	assign result[15:0] = 16'b0;
	assign acc_status[15:0] = 16'b0;
	
	if(A >= B)
	begin
		HS hs_ab(A[0],B[0],D,B);
		assign result[0] = D;
		
		for (i = 1; i < 4 ; i = i + 1)
		begin
			FS fs2_ab(.A(A[i]),.B(B[i]),.Bi(Bi),.D(D),.Bo(Bo));
			assign Bi = Bo;
			assign result[i] = D;
		end
		
		//assign result[4] = Bo;
	end else
	begin
		HS hs_ba(B[0],A[0],D,B);
		assign result[0] = D;
		
		for (i = 1; i < 4 ; i = i + 1)
		begin
			FS fs2_ba(.A(B[i]),.B(A[i]),.Bi(Bi),.D(D),.Bo(Bo));
			assign Bi = Bo;
			assign result[i] = D;
		end
		
		//assign result[4] = Bo;
		
	end
	

endmodule
