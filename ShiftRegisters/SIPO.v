`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:20:42 02/19/2019 
// Design Name: 
// Module Name:    SIPO 
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
module SIPO(input clk, reset, SI, output reg [3:0]PO); 
	
reg [3:0] tmp; 
 
  always @(negedge clk, reset) 
    begin 	
		tmp = tmp >> 1;
      tmp[3] = SI;
		if(!reset)
			PO  = tmp;
		else
			PO = 4'bxxxx;
    end 
	 
endmodule 

