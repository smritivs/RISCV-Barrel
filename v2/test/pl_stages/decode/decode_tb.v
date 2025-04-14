module decode_tb();
parameter ADDRESS_WIDTH = 32;
parameter DATA_WIDTH = 32;
parameter NUM_THREADS = 8;
parameter BITS_THREADS = $clog2(NUM_THREADS);
reg clk;
reg [DATA_WIDTH-1:0] result_w;
reg [4:0] rd_w;
reg [ADDRESS_WIDTH-1:0] pc_f;
reg [DATA_WIDTH-1:0] instr_f;
reg [BITS_THREADS-1:0] tid_f, tid_w;
wire reg_write_d;
wire [1:0] res_src_d;
wire mem_write_d;
wire [3:0] alu_control_d;
wire [2:0] funct3_d;
wire alu_src_b_d;
wire [DATA_WIDTH-1:0] rd1_d;
wire [ADDRESS_WIDTH-1:0] pc_d;
wire [4:0] rs1_d;
wire [DATA_WIDTH-1:0] imm_val_d;
wire [ADDRESS_WIDTH-1:0] pc_plus4_d;
wire [BITS_THREADS-1:0] tid_d;
decode dut(
.clk(clk),
.result_w(result_w),
.rd_w(rd_w),
.pc_f(pc_f),
.instr_f(instr_f),
.tid_f(tid_f),
.tid_w(tid_w),
.reg_write_d(reg_write_d),
.res_src_d(res_src_d),
.mem_write_d(mem_write_d),
.alu_control_d(alu_control_d),
.funct3_d(funct3_d),
.alu_src_b_d(alu_src_b_d),
.rd1_d(rd1_d),
.pc_d(pc_d),
.rs1_d(rs1_d),
.imm_val_d(imm_val_d),
.pc_plus4_d(pc_plus4_d),
.tid_d(tid_d)
);


initial begin
clk=0;
result_w=0;
rd_w=0;
pc_f=0;
instr_f=0;
tid_f=0;
tid_w=0;
end

// Write testbench code here
initial begin
    #10
    result_w=32'd100;
    rd_w=5'd7;
    pc_f=32'd0;
    instr_f=32'h00100093;
    tid_f=5'd0;
    tid_w=5'd0;
    #10
    result_w=32'd100;
    rd_w=5'd6;
    pc_f=32'd0;
    instr_f=32'h00c18293;
    tid_f=5'd0;
    tid_w=5'd0;
end

initial begin
$dumpfile("dumpfile.vcd");
$dumpvars(0, decode_tb);

end
always
#5 clk = ~clk;

endmodule
