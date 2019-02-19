`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:36:45 02/05/2019 
// Design Name: 
// Module Name:    mux 
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

module mux_dataf(
	input [3:0]i, [1:0]s,
	output y
    );
	 assign y = (~s[1])&(~s[0]) & i[0] + (~s[0])&s[1]&i[1] + s[0]&(~s[1])&i[2] + s[0]&s[1]&i[3];
endmodule


module mux_switch(input [3:0]i, [1:0]s, output reg y);
always @ (i, s)
begin
case(s)
2'b00: y = i[0]; 
2'b01: y = i[1]; 
2'b10: y = i[2]; 
2'b11: y = i[3];
endcase 
end
endmodule
