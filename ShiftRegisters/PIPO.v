`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:49:53 02/19/2019 
// Design Name: 
// Module Name:    PIPO 
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
module PIPO(input clk, reset, [3:0]PI, output reg [3:0]PO); 
	
reg [3:0] tmp; 
 
  always @(negedge clk, reset) 
    begin 	
      tmp = PI; 
		if(!reset)
			PO  = tmp;
		else
			PO = 4'bxxxx;
    end 
	 
endmodule 