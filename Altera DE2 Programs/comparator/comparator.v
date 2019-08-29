module comparator(a,b,g,l,e);
parameter n =4;
output reg g,l,e;
input [n-1 : 0] a,b;

always @ (*)
	begin
		if(a>b)
			{g,l,e} = 3'b100;
		if(a<b)
			{g,l,e} = 3'b010;
		if(a==b)
			{g,l,e} = 3'b001;
	end
endmodule
