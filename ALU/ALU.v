`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:54 02/12/2019 
// Design Name: 
// Module Name:    ALU 
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
module ALU(
	input [31:0] a, b,
	input [2:0]op,
	output reg [31:0]q
    );
	
	always @(a,b,op)
	begin
		case(op)
			
			3'b000: q = a + b;
			3'b001: q = a - b;
			3'b010: q = a * b;
			3'b011: q = a & b;
			3'b100: q = a | b;
			3'b101: q = ~(a & b);
			3'b110: q = ~(a | b);
			3'b111: q = ~a;
			
		endcase
	end
endmodule
