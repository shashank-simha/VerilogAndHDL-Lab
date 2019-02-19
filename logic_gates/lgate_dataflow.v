`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    15:23:17 01/29/2019 
// Design Name: 
// Module Name:    lgate_dataflow 
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
module lgate_dataflow(
    input a, b, 
    output [6:0] y
    );
	 assign y[0] = a & b;
	 assign y[1] = a ^ b;
	 assign y[2] = a | b;
	 assign y[3] = ~(a & b);
	 assign y[4] = ~(a | b);
	 assign y[5] = ~(a ^ b);
	 assign y[6] = ~a;
endmodule
