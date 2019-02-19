`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:12:41 02/19/2019 
// Design Name: 
// Module Name:    SISO 
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

module SISO(input clk, reset, SI, output reg SO); 
	
reg [3:0] tmp; 
 
  always @(negedge clk) 
    begin 	
		tmp = tmp >> 1;
      tmp[3] = SI; 
    end 
	 
  always @ (reset)
	begin
	 if(!reset)
		SO  = tmp[0];
	 else
		SO = 1'bx;
	end	
endmodule 

