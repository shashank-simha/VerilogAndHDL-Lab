`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:20:59 02/05/2019 
// Design Name: 
// Module Name:    GrayToBin 
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
module GrayToBin(
	input [2:0]g,
	output [2:0]b
    );
	reg [2:0]b;
	
	always @ (g)

	begin
		b[2] = g[2];
		b[1] = g[1] ^ b[2];
		b[0] = g[0] ^ b[1];
	end
	
endmodule
