`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:38:33 02/19/2019 
// Design Name: 
// Module Name:    JohnsonCounter 
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
module JohnsonCounter(
	input clk,
	output reg [3:0]o
    );
	
	reg temp;
	
	initial
	o = 0;
	
	always @ (negedge clk)
		begin
			temp = o[0];
			o[0] = o[1];
			o[1] = o[2];
			o[2] = o[3];
			o[3] = ~(temp);
		end

endmodule
