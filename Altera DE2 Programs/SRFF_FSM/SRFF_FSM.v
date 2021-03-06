// Copyright (C) 1991-2009 Altera Corporation
// Your use of Altera Corporation's design tools, logic functions 
// and other software and tools, and its AMPP partner logic 
// functions, and any output files from any of the foregoing 
// (including device programming or simulation files), and any 
// associated documentation or information are expressly subject 
// to the terms and conditions of the Altera Program License 
// Subscription Agreement, Altera MegaCore Function License 
// Agreement, or other applicable license agreement, including, 
// without limitation, that your use is for the sole purpose of 
// programming logic devices manufactured by Altera and sold by 
// Altera or its authorized distributors.  Please refer to the 
// applicable agreement for further details.

// Generated by Quartus II Version 9.1 Build 222 10/21/2009 SJ Full Version
// Created on Tue Apr 16 16:38:35 2019

// synthesis message_off 10175

`timescale 1ns/1ns

module SRFF_FSM (
    reset,clock,s,r,
    q);

    input reset;
    input clock;
    input s;
    input r;
    tri0 reset;
    tri0 s;
    tri0 r;
    output q;
    reg q;
    reg [2:0] fstate;
    reg [2:0] reg_fstate;
    parameter s0=0,s1=1,s2=2;

    always @(posedge clock)
    begin
        if (clock) begin
            fstate <= reg_fstate;
        end
    end

    always @(fstate or reset or s or r)
    begin
        if (reset) begin
            reg_fstate <= s2;
            q <= 1'b0;
        end
        else begin
            q <= 1'b0;
            case (fstate)
                s0: begin
                    if (((~(s) & ~(r)) | (~(s) & r)))
                        reg_fstate <= s0;
                    else if ((s & r))
                        reg_fstate <= s2;
                    else if ((s & ~(r)))
                        reg_fstate <= s1;
                    // Inserting 'else' block to prevent latch inference
                    else
                        reg_fstate <= s0;

                    q <= 1'b0;
                end
                s1: begin
                    if (((~(s) & ~(r)) | (s & ~(r))))
                        reg_fstate <= s1;
                    else if ((~(s) & r))
                        reg_fstate <= s0;
                    else if ((s & r))
                        reg_fstate <= s2;
                    // Inserting 'else' block to prevent latch inference
                    else
                        reg_fstate <= s1;

                    q <= 1'b1;
                end
                s2: begin
                    if (((~(s) & ~(r)) | (s & r)))
                        reg_fstate <= s2;
                    else if ((~(s) & r))
                        reg_fstate <= s0;
                    else if ((s & ~(r)))
                        reg_fstate <= s1;
                    // Inserting 'else' block to prevent latch inference
                    else
                        reg_fstate <= s2;
                end
                default: begin
                    q <= 1'bx;
                    $display ("Reach undefined state");
                end
            endcase
        end
    end
endmodule // SRFF_FSM
