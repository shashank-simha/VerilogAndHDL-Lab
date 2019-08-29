`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:10:01 02/05/2019 
// Design Name: 
// Module Name:    BinToGray 
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
module BinToGray(
	input [2:0]b,
	output [2:0]g
    );
	 reg [2:0]g;
	 always @(b)
	 begin
		g[2] = b[2];
		g[1] = b[2] ^ b[1];
		g[0] = b[1] ^ b[0];
	 end
	
endmodule
