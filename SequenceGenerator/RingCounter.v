`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:47:43 02/19/2019 
// Design Name: 
// Module Name:    RingCounter 
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
module RingCounter(
   input clk,
	output reg [3:0]o
    );
	
	reg temp;
	
	initial
	o = 1000;
	
	always @ (negedge clk)
		begin
			temp = o[0];
			o[0] = o[1];
			o[1] = o[2];
			o[2] = o[3];
			o[3] = temp;
		end
		
endmodule
