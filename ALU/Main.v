`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    09:26:08 01/15/2021 
// Design Name: 
// Module Name:    Main 
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
module Main(CLK, SW1, SW2, SW3, SW4, SW5, SW6, SW7, SW8,
				SW17, SW18,SW22, DOUT, SIG1, SIG2);

	input CLK, SW1, SW2, SW3, SW4, SW5, SW6, SW7, SW8;
	input SW17, SW18, SW22;
	output SIG1, SIG2;
	output [7:0] DOUT;
	
	wire S_CLK;
	wire [3:0]index;
	wire [3:0]OUT1;
	wire [3:0]OUT2;
	wire [3:0]OUT;
	integer j = 0;
	reg[3:0] indexregister[0:7];
	reg[3:0] OPA = 4'b0000;
	reg[3:0] OPR = 4'b0000;
	reg[3:0] accumulator = 4'b1010;
	reg [3:0]status = 4'b0101;
	reg [3:0] temp = 4'b1010;

	
	initial begin
		indexregister[0] = 4'b0000;
		indexregister[1] = 4'b0001;
		indexregister[2] = 4'b0010;
		indexregister[3] = 4'b0011;
		indexregister[4] = 4'b0100;
		indexregister[5] = 4'b0101;
		indexregister[6] = 4'b0110;
		indexregister[7] = 4'b0111;
		
	end


	always @ (SW17)begin
		if (SW17 == 1) begin
			OPR <= {SW1,SW2,SW3,SW4};
			OPA <= {SW5,SW6,SW7,SW8};
			temp <= accumulator;
		end
		if (SW17 == 0) begin
			if (OPR == 4'b0001)begin
				accumulator <= OPA;
				status <= 4'b0000;
			end
			
			if (OPR == 4'b0010) begin
				if(OPA >= 0 && OPA <= 7)begin
					indexregister[OPA] <= accumulator;
					status <= 4'b0000;
				end
			end
			
			if (OPR == 4'b0011) begin
				if(OPA >= 0 && OPA <= 7)begin
					accumulator <= indexregister[OPA];
					status <= 4'b0000;
				end
			end
			
			if (OPR == 4'b0100) begin
				if(OPA >= 0 && OPA <= 7)begin
					{status,accumulator} <= temp + indexregister[OPA];
				end
			end
			
			if (OPR == 4'b0101) begin
				if(OPA >= 0 && OPA <= 7)begin
					{status, accumulator} <= temp - indexregister[OPA];
				end
			end
			
			if (OPR == 4'b0110) begin
					accumulator <= ~temp;
					status <= 4'b0000;
			end
			
			if (OPR == 4'b0111) begin
				if(OPA >= 0 && OPA <= 7)begin
					accumulator <= temp & indexregister[OPA];
					status <= 4'b0000;
				end
			end
			
			if (OPR == 4'b1000) begin
				if(OPA >= 0 && OPA <= 7)begin
					accumulator <= temp | indexregister[OPA];
					status <= 4'b0000;
				end
			end
			
			if (OPR == 4'b1001) begin
				if(OPA >= 0 && OPA <= 7)begin
					accumulator <= temp ^ indexregister[OPA];
					status <= 4'b0000;
				end
			end
		end
	end
	
	
	
	DividerForDynamicLighting DFDL(.CLK(CLK), .CE_OUT(S_CLK));
	IndexSelector indexselector(.Switches({SW8,SW7,SW6,SW5,SW4,SW3,SW2,SW1}),.Index(index));
	OutputSelector outputselector(.SW18(SW18),.SW22(SW22),.switches({SW1,SW2,SW3,SW4,SW5,SW6,SW7,SW8})
											,.instruction({OPR,OPA}), .index(indexregister[index]), .accumulator(accumulator)
											,.status(status),.OUT1(OUT1), .OUT2(OUT2));
	Selector selector(.SW(S_CLK), .CNT1(OUT1), .CNT2(OUT2), .CNT(OUT));
	Switcher switcher(.CLK(S_CLK), .D1(SIG1), .D2(SIG2));
	Decoder decoder(.IN(OUT), .OUT(DOUT));
	
	
endmodule
