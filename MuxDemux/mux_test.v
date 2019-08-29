`timescale 1ns / 1ps

////////////////////////////////////////////////////////////////////////////////
// Company: 
// Engineer:
//
// Create Date:   14:43:50 02/06/2019
// Design Name:   mux_switch
// Module Name:   C:/Users/Student/Desktop/ShashankShivv/MuxDemux/mux_test.v
// Project Name:  MuxDemux
// Target Device:  
// Tool versions:  
// Description: 
//
// Verilog Test Fixture created by ISE for module: mux_switch
//
// Dependencies:
// 
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
// 
////////////////////////////////////////////////////////////////////////////////

module mux_test;

	// Inputs
	reg [3:0] i;

	// Instantiate the Unit Under Test (UUT)
	mux_switch uut (
		.i(i)
	);

	initial begin
		// Initialize Inputs
		i = 0;

		// Wait 100 ns for global reset to finish
		#100;
        
		// Add stimulus here

	end
      
endmodule

