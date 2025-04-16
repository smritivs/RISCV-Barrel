module mt_pc_tb();
parameter NUM_THREADS = 8;
parameter BITS_THREADS = $clog2(NUM_THREADS);
parameter ADDRESS_WIDTH = 32;
reg clk;
reg rst;
reg [BITS_THREADS-1:0] tid;
reg pc_src_e;
reg [BITS_THREADS-1:0] branch_tid_e;
reg [ADDRESS_WIDTH-1:0] pc_target_e;
wire [ADDRESS_WIDTH-1:0] pc,pc_plus4;
mt_pc dut(
.clk(clk),
.rst(rst),
.tid(tid),
.pc_src_e(pc_src_e),
.branch_tid_e(branch_tid_e),
.pc_target_e(pc_target_e),
.pc(pc),
.pc_plus4(pc_plus4)
);
initial begin
clk = 0;
rst = 1;
tid = 0;
pc_src_e = 0;
branch_tid_e = 0;
pc_target_e = 0;
end
always
    #5 clk = ~clk;
// Write testbench code here
initial begin
    #10
    rst = 0;
    tid = 0;
    pc_src_e = 0;
    branch_tid_e = 0;
    pc_target_e = 0;

    #10
    tid = 1;
    pc_src_e = 0;
    branch_tid_e = 0;
    pc_target_e = 0;

    #10
    rst = 0;
    tid = 2;
    pc_src_e = 0;
    branch_tid_e = 0;
    pc_target_e = 0;

    #10
    rst = 0;
    tid = 3;
    pc_src_e = 0;
    branch_tid_e = 0;
    pc_target_e = 0;

    #100 $finish();
end
initial begin
$dumpfile("dumpfile.vcd");
$dumpvars(0,mt_pc_tb);
end
endmodule
