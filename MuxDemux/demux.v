`timescale 1ns / 1ps
//////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer: 
// 
// Create Date:    16:37:02 02/05/2019 
// Design Name: 
// Module Name:    demux 
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
/*module demux_beh(
	input x, [1:0]s,
	output reg [3:0]i
    );
	
	always @ (s,x)
		begin
			i[0] = (~s[1]) & (~s[0]) & x;
			i[1] = (~s[1]) & s[0] & x;
			i[2] = s[1] & (~s[0]) & x;
			i[3] = s[1] & s[0] & x;
		end
		
endmodule
*/
module demux_switch(
	input x, [1:0]s,
	output reg [3:0]i
    );

	always @ (s,x)
		begin
			case(s)
				2'b00: i[0] = x; 
				2'b01: i[1] = x; 
				2'b10: i[2] = x;
				2'b11: i[3] = x;
			endcase
		end

endmodule 