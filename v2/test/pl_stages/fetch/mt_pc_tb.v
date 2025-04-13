module mt_pc_tb();
parameter NUM_THREADS = 8;
parameter BITS_THREADS = $clog2(NUM_THREADS);
parameter ADDRESS_WIDTH = 32;
reg clk,rst;
reg [BITS_THREADS-1:0] tid;
reg pc_src_e;
reg [BITS_THREADS-1:0] branch_tid_e;
reg [ADDRESS_WIDTH-1:0] pc_target_e;
wire [ADDRESS_WIDTH-1:0] pc;

mt_pc dut(
.clk(clk),.rst(rst),
.tid(tid),
.pc_src_e(pc_src_e),
.branch_tid_e(branch_tid_e),
.pc_target_e(pc_target_e),
.pc(pc)
);


initial begin
    $dumpfile("dumpfile.vcd");
    $dumpvars(0, mt_pc2_tb);
end

initial begin
clk=1'b0;
rst=1'b1;
tid=3'b000;
pc_src_e=1'b0;
branch_tid_e=3'b000;
pc_target_e=32'd0;
end

// Write testbench code here
initial begin
    #10
    rst=0;
    // write PC vals
    pc_src_e=1'b0;
    branch_tid_e=3'd0;
    pc_target_e=32'd100;

    #10
    pc_src_e=1'd0;
    branch_tid_e=3'd1;
    pc_target_e=32'd200;

    #10
    pc_src_e=1'd0;
    branch_tid_e=3'd2;
    pc_target_e=32'd300;

    #10
    pc_src_e=1'd0;
    branch_tid_e=3'd3;
    pc_target_e=32'd400;

    #10
    pc_src_e=1'd1;
    branch_tid_e=3'd4;
    pc_target_e=32'd100;

    #10
    pc_src_e=1'd1;
    branch_tid_e=3'd5;
    pc_target_e=32'd100;

    #10
    pc_src_e=1'd1;
    branch_tid_e=3'd6;
    pc_target_e=32'd100;

    #10
    pc_src_e=1'd1;
    branch_tid_e=3'd7;
    pc_target_e=32'd100;

    #10
    tid=3'd0;

    #10
    tid=3'd1;

    #10
    tid=3'd2;

    #10
    tid=3'd3;

    #10
    tid=3'd4;

    #10
    tid=3'd5;

    #10
    tid=3'd6;

    #10
    tid=3'd7;

end

initial begin
    #1000 $finish();
end


always
    #5 clk = ~clk;

endmodule
