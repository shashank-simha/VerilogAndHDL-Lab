module Ssegment(s,y);
input [3:0]s;
output reg [6:0]y;

initial
begin
y={7{1'b1}};
end
always @(s)
begin
case(s)
4'b0000 : y=7'b1000000;
4'b0001 : y=7'b1111001;
4'b0010 : y=7'b0100100;
4'b0011 : y=7'b0110000;
4'b0100 : y=7'b0011001;
4'b0101 : y=7'b0010010;
4'b0110 : y=7'b0000010;
4'b0111 : y=7'b1111000;
4'b1000 : y=7'b0000000;
4'b1001 : y=7'b0011000;
default: y={7{1'b1}};
endcase
end
endmodule
