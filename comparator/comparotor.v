`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    14:41:03 02/06/2019 
// Design Name: 
// Module Name:    comparotor 
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
module comparotor(
		input [2:0]a,b,
		input ie, ig, il,
		output oe, og, ol		
    );
	
	assign oe = ie && (a==b);
	assign og = (a > b) || ((a == b) && ig);
	assign ol = (a < b) || ((a == b) && il);

endmodule
