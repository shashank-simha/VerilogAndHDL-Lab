module  even_odd_sseg(b,c);
 input [3:0]b;
 output reg [6:0]c;
 reg [3:0]count;
 
 initial
  begin 
    c = {7{1'b0}};
   end
  
  always@(b)
  begin
    integer i;
 for(i = 0; i <=3; i=i+1)
   begin 
     if(b[i] ==1)
       begin
          count = count +1;
       end
   end
  
 if(count[0] ==1)
   begin
     c = 7'b1000000;
     end
     
  else
     begin
       c =7'0000110;
       end
       
  end
 endmodule

 