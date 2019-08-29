module BinaryGray(b,g);
	
parameter m = 3;

input [m-1:0]b;
output reg [m-1:0]g;

integer i;

always @ (b)
begin
	g[m-1] = b[m-1];

	for(i=m-2; i>=0; i=i-1)
		g[i] = b[i] ^ b[i+1];
end	

endmodule

