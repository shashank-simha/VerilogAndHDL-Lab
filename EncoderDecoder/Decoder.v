`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:35:34 02/06/2019 
// Design Name: 
// Module Name:    Decoder 
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
module Decoder_switch(
	input [2:0]s,
	output [7:0]i
    );
	
	reg [7:0]i;
	
	always @ (s)
		begin
			case(s)
				3'b000: i = 8'b00000001;
				3'b001: i = 8'b00000010;
				3'b010: i = 8'b00000100;
				3'b011: i = 8'b00001000;
				3'b100: i = 8'b00010000;
				3'b101: i = 8'b00100000;
				3'b110: i = 8'b01000000;
				3'b111: i = 8'b10000000;
			endcase
		end

endmodule



module Decoder3to8_df(
		input [2:0]s,
		output [7:0]i
	 	 );
		 
		Decoder2to4 D1(s[1:0], s[2], i[7:4]);
		Decoder2to4 D2(s[1:0], (~s[2]), i[3:0]);
		
endmodule 


module Decoder2to4(
		input [1:0]s,
		input en,
		output reg [3:0]i
		 );
		
		always @ (i, en)
		begin
		if(en)
			begin
				 i[0] = (~s[0]) & (~s[1]);
				 i[1] = (~s[0]) & (s[1]);
				 i[2] = (s[0]) & (~s[1]);
				 i[3] = (s[0]) & (s[1]);
			end
		else
			begin
				i = 4'b0000;
			end
		end
endmodule 