module GrayBinary(b,g);
parameter m=3;
integer i;
input [m-1:0]g;
output reg[m-1:0]b;
always@(b)
begin
b[m-1] = g[m-1];
for(i=m-2;i>=0;i=i-1)
b[i] = g[i] ^ b[i+1];
end
endmodule
