`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:37:56 02/12/2021 
// Design Name: 
// Module Name:    SUB4 
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
module SUB4(input [3:0]A,input [3:0]B,output reg [3:0]result);

	wire D;
	wire Bi;
	wire Bo;
	integer i;
	
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
