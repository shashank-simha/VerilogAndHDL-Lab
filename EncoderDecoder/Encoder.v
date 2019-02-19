`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:53:38 02/06/2019 
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
module Encoder_withoutP(
	input [7:0]i, 
	output reg [2:0]y
    );

	always @ (i)
		begin
			case(i)
				1: y = 0;
				2: y = 1;
				4: y = 2;
				8: y = 3;
				16: y = 4;
				32: y = 5;
				64: y = 6;
				128: y = 7;
			endcase
		end

endmodule

/*module Encoder_withP(
	input [7:0]i, 
	output reg [2:0]y
    );

	always @ (i)
		begin
			casex(i)
				8'b00000001: y = 0;
				8'b0000001x: y = 1;
				8'b000001xx: y = 2;
				8'b00001xxx: y = 3;
				8'b0001xxxx: y = 4;
				8'b001xxxxx: y = 5;
				8'b01xxxxxx: y = 6;
				8'b1xxxxxxx: y = 7;
			endcase
		end

endmodule 
*/


module Encoder_withP(
	input [7:0]i, 
	output reg [2:0]y
    );

	always @ (i)
		begin
			casex(i)
				8'b: y = 0;
				8'b0000001x: y = 1;
				8'b000001xx: y = 2;
				8'b00001xxx: y = 3;
				8'b0001xxxx: y = 4;
				8'b001xxxxx: y = 5;
				8'b01xxxxxx: y = 6;
				8'b1xxxxxxx: y = 7;
			endcase
		end

endmodule 