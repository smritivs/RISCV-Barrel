module memory #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter DMEM_SIZE = 64,
    parameter NUM_THREADS = 8
    )(
    input clk, reg_write_e,
    input [1:0] result_src_e,
    input mem_write_e,
    input [14:12] funct3_e,

    input [DATA_WIDTH-1:0] alu_result_e, write_data_e,
    input [4:0] rd_e,
    input [ADDRESS_WIDTH-1:0] pc_plus4_e,
    input [$clog2(NUM_THREADS)-1:0] tid_e,

    output reg_write_m,
    output [1:0] result_src_m,
    output [DATA_WIDTH-1:0] alu_result_m,
    output [DATA_WIDTH-1:0] read_data_m,
    output [4:0] rd_m,
    output [ADDRESS_WIDTH-1:0] pc_plus4_m,
    output [$clog2(NUM_THREADS)-1:0] tid_m
);

data_memory #(
    .ADDRESS_WIDTH(ADDRESS_WIDTH),
    .DATA_WIDTH(DATA_WIDTH),
    .MEM_SIZE(DMEM_SIZE)
)
dm(
    .clk(clk),
    .mem_write_e(mem_write_e),
    .funct3(funct3_e),
    .data_mem_addr(alu_result_e),
    .write_data_e(write_data_e),
    .read_data_m(read_data_m)
);

assign reg_write_m = reg_write_e;
assign result_src_m = result_src_e;
assign alu_result_m = alu_result_e;
assign rd_m = rd_e;
assign pc_plus4_m = pc_plus4_e;
assign tid_m = tid_e;

endmodule


//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 12/27/2024 12:02:59 PM
// Design Name:
// Module Name: ff
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module ff #(
    parameter DATA_WIDTH=32
    )(
    input clk,
    input [DATA_WIDTH-1:0] din,
    output reg [DATA_WIDTH-1:0] dout
);

always @(posedge clk) begin
    dout <= din;
end

endmodule

module mux3 #(
    parameter DATA_WIDTH = 32
    )(
    input [DATA_WIDTH-1:0] in1,in2,in3,
    input [1:0] sel,
    output reg [DATA_WIDTH-1:0] out
);

always@(*) begin
    case(sel)
        2'b00: out = in1;
        2'b01: out = in2;
        2'b10: out = in3;
        default: out = 32'd0;
    endcase

end
endmodule

module thread_sel #(
    parameter NUM_THREADS = 8
    )(
    input clk,rst,
    output reg [$clog2(NUM_THREADS)-1:0] tid
);

always@(posedge clk) begin
    if(rst)
        tid <= {$clog2(NUM_THREADS){1'd0}};

    else
        tid <= tid + 1;
end
endmodule


//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 12/27/2024 12:02:59 PM
// Design Name:
// Module Name: mux4
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module mux4#(
    parameter DATA_WIDTH=32
    )(
    input [DATA_WIDTH-1:0] in1,in2,in3,in4,
    input [1:0] sel,
    output reg [DATA_WIDTH-1:0] out
);

always@(*) begin
    case(sel)
        2'b00: out = in1;
        2'b01: out = in2;
        2'b10: out = in3;
        2'b11: out = in4;
        default: out = 0;
    endcase

end
endmodule

module pl_reg_fd #(
	parameter ADDRESS_WIDTH = 32,
	parameter DATA_WIDTH = 32,
	parameter NUM_THREADS = 8
	)(
	input clk, en, clr,

	input [ADDRESS_WIDTH-1:0] pc_f, pc_plus4_f,
    input [DATA_WIDTH-1:0] instr_f,
    input [$clog2(NUM_THREADS)-1:0] tid_f,

    output reg [ADDRESS_WIDTH-1:0] pc_d, pc_plus4_d,
    output reg [DATA_WIDTH-1:0] instr_d,
    output reg [$clog2(NUM_THREADS)-1:0] tid_d
);



always @(posedge clk) begin
	if(clr) begin
		pc_d <= 32'd0;
		pc_plus4_d <= 32'd0;
		instr_d <= 32'd0;
		tid_d <= 3'd0;
	end

	else if(!en) begin
		pc_d <= pc_f;
		pc_plus4_d <= pc_plus4_f;
		instr_d <= instr_f;
		tid_d <= tid_f;
	end

end
endmodule

module decode #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter NUM_THREADS = 8
    )(
    input clk,
    reg_write_w,
    input [DATA_WIDTH-1:0] result_w,
    input [4:0] rd_w,

    input [ADDRESS_WIDTH-1:0] pc_f,
    pc_plus4_f,
    input [DATA_WIDTH-1:0] instr_f,
    input [$clog2(NUM_THREADS)-1:0] tid_f, tid_w,

    output reg_write_d,
    output [1:0] res_src_d,
    output mem_write_d,
    jump_d,
    branch_d,
    output [3:0] alu_control_d,
    output [2:0] funct3_d,
    output alu_src_b_d,
    alu_src_a_d,

    output [DATA_WIDTH-1:0] rd1_d,
    rd2_d,
    output [ADDRESS_WIDTH-1:0] pc_d,
    output [4:0] rd_d,
    output [DATA_WIDTH-1:0] imm_val_d,
    output [ADDRESS_WIDTH-1:0] pc_plus4_d,
    output [$clog2(NUM_THREADS)-1:0] tid_d
);



    wire [2:0] imm_src_d;

    control_unit cu (
        .op(instr_f[6:0]),
        .funct3(instr_f[14:12]),
        .funct7b5(instr_f[30]),
        .reg_write_d(reg_write_d),
        .res_src_d(res_src_d),
        .mem_write_d(mem_write_d),
        .jump_d(jump_d),
        .branch_d(branch_d),
        .alu_control_d(alu_control_d),
        .alu_src_a_d(alu_src_a_d),
        .alu_src_b_d(alu_src_b_d),
        .imm_src_d(imm_src_d)
    );

    mt_reg_file #(
        .NUM_THREADS(NUM_THREADS),
        .DATA_WIDTH(DATA_WIDTH)
    )
    rf (
        .clk(clk),
        .write_enable(reg_write_w),
        .tid_read(tid_f),
        .tid_write(tid_w),
        .a1(instr_f[19:15]),
        .a2(instr_f[24:20]),
        .a3(rd_w),
        .wd3(result_w),
        .rd1(rd1_d),
        .rd2(rd2_d)
    );

    imm_ext imex (
        .instr(instr_f[31:7]),
        .imm_type(imm_src_d),
        .imm_val(imm_val_d)
    );

    assign funct3_d = instr_f[14:12];

    assign pc_d = pc_f;
    assign pc_plus4_d = pc_plus4_f;
    assign rd_d = instr_f[11:7];

    assign tid_d = tid_f;

endmodule

module writeback #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter NUM_THREADS = 8
) (
    input reg_write_m,
    input [1:0] result_src_m,
    input [DATA_WIDTH-1:0] alu_result_m,
    input [DATA_WIDTH-1:0] read_data_m,
    input [4:0] rd_m,
    input [ADDRESS_WIDTH-1:0] pc_plus4_m,
    input [$clog2(NUM_THREADS)-1:0] tid_m,

    output [DATA_WIDTH-1:0] result_w,
    output reg_write_w,
    output [4:0] rd_w,
    output [$clog2(NUM_THREADS)-1:0] tid_w
);



    mux3 #(
        .DATA_WIDTH(DATA_WIDTH)
    )
    result_mux (
        .in1(alu_result_m),
        .in2(read_data_m),
        .in3(pc_plus4_m),
        .sel(result_src_m),
        .out(result_w)
    );

assign rd_w = rd_m;
assign reg_write_w = reg_write_m;
assign tid_w = tid_m;

endmodule

module pl_reg_em #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter NUM_THREADS = 8
    )(
    input clk,
    en,
    clr,

    input reg_write_e,
    input mem_write_e,
    input [1:0] result_src_e,
    input [14:12] funct3_e,
    input [DATA_WIDTH-1:0] alu_result_e,
    write_data_e,
    input [4:0] rd_e,
    input [ADDRESS_WIDTH-1:0] pc_plus4_e,
    input [$clog2(NUM_THREADS)-1:0] tid_e,

    output reg reg_write_m,
    output reg mem_write_m,
    output reg [1:0] result_src_m,
    output reg [14:12] funct3_m,
    output reg [DATA_WIDTH-1:0] alu_result_m,
    write_data_m,
    output reg [4:0] rd_m,
    output reg [ADDRESS_WIDTH-1:0] pc_plus4_m,
    output reg [$clog2(NUM_THREADS)-1:0] tid_m
);


    always @(posedge clk) begin
        if (clr) begin
            reg_write_m <= 1'b0;
            mem_write_m <= 1'b0;
            result_src_m <= 2'b00;
            funct3_m <= 3'b0;
            alu_result_m <= 32'd0;
            write_data_m <= 32'd0;
            rd_m <= 5'd0;
            pc_plus4_m <= 32'd0;
            tid_m <= 3'd0;
        end else if (!en) begin
            reg_write_m <= reg_write_e;
            mem_write_m <= mem_write_e;
            result_src_m <= result_src_e;
            funct3_m <= funct3_e;
            alu_result_m <= alu_result_e;
            write_data_m <= write_data_e;
            rd_m <= rd_e;
            pc_plus4_m <= pc_plus4_e;
            tid_m <= tid_e;
        end
    end
endmodule


//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 01/10/2025 10:39:12 AM
// Design Name:
// Module Name: instr_mem
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module instr_mem #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter MEM_SIZE = 512
    )(
    /* verilator lint_off UNUSEDSIGNAL */
    input [ADDRESS_WIDTH-1:0] instr_addr,
    output [DATA_WIDTH-1:0] instr
    );

// wire for memory address access
// array of 32-bit words or instructions
reg [DATA_WIDTH-1:0] instr_rom [0:MEM_SIZE-1];
initial begin
        $readmemh("./code.hex", instr_rom);
    end

// word-aligned memory access
// combinational read logic
assign instr = instr_rom[instr_addr[$clog2(MEM_SIZE)+2-1:2]];

endmodule

module control_unit(
    input [6:0] op,
    input [14:12] funct3,
    input funct7b5,

    output reg_write_d,
    output [1:0] res_src_d,
    output mem_write_d, jump_d, branch_d,
    output [3:0] alu_control_d,
    output alu_src_b_d, alu_src_a_d,
    output [2:0] imm_src_d
    );


// control bit format is
// regwrite_ressrc_memwrite_jump_branch_alusrca_alusrcb_immsrc
// auipc uses alternate source for a
// jalr uses alternate source for next pc adder
reg [10:0] controls;
reg [3:0] alu_controls;

// main decoder
always @(*) begin
    case(op)
    // load instr
    7'b0000011: controls = 11'b1_01_0_0_0_0_1_000;
    // immediate arithmetic instr
    7'b0010011: controls = 11'b1_00_0_0_0_0_1_000;
    // auipc
    7'b0010111: controls = 11'b1_00_0_0_0_1_1_100;
    // store instr
    7'b0100011: controls = 11'b0_01_1_0_0_0_1_001;
    // register arithmetic instr
    7'b0110011: controls = 11'b1_00_0_0_0_0_0_xxx;
    // lui
    7'b0110111: controls = 11'b1_00_0_0_0_0_1_100;
    // branch
    7'b1100011: controls = 11'b0_00_0_0_1_1_1_010;
    // jalr
    7'b1100111: controls = 11'b1_10_0_1_0_0_1_000;
    // jal
    7'b1101111: controls = 11'b1_10_0_1_0_1_1_011;
    // default
    default: controls = 11'dx;
    endcase
end

// alu decoder
always @(*) begin
    casez(op)
    // load instr
    7'b0000011: alu_controls = 4'b0000;
    // auipc
    7'b0010111: alu_controls = 4'b0000;
    // store instr
    7'b0100011: alu_controls = 4'b0000;
    // immediate and register arithmetic instr
    7'b0?10011: begin
        case(funct3)
            // sub, add
            3'b000: alu_controls = (funct7b5 & op[5]) ? 4'b0001 : 4'b0000;
            // shift left logical
            3'b001: alu_controls = 4'b0010;
            // set less than
            3'b010: alu_controls = 4'b0011;
            // set less than unsigned
            3'b011: alu_controls = 4'b0100;
            // xor
            3'b100: alu_controls = 4'b0101;
            // shift right arithmetic, logical
            3'b101: alu_controls = (funct7b5) ? 4'b0111 : 4'b0110;
            // or
            3'b110: alu_controls = 4'b1000;
            // and
            3'b111: alu_controls = 4'b1001;
        endcase
    end
    // lui
    7'b0110111: alu_controls = 4'b1101;
    // branch
    7'b1100011: alu_controls = 4'b0000;
    // jalr
    7'b1100111: alu_controls = 4'b0000;
    // jal
    7'b1101111: alu_controls = 4'b0000;
    // default
    default: alu_controls = 4'dx;
    endcase
end

assign {reg_write_d,res_src_d,mem_write_d,jump_d,branch_d,alu_src_a_d,alu_src_b_d,imm_src_d} = controls;
assign alu_control_d = alu_controls;
endmodule


//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 12/27/2024 12:02:59 PM
// Design Name:
// Module Name: mux2
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module mux2 #(
    parameter DATA_WIDTH=32
    )(
    input [DATA_WIDTH-1:0] in1,in2,
    input sel,
    output[DATA_WIDTH-1:0] out
);

assign out = sel ? in2 : in1;
endmodule

module mt_cpu #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32,
    parameter IMEM_SIZE = 1024,
    parameter DMEM_SIZE = 64,
    parameter NUM_THREADS = 8
    )(
    input clk,
    input rst,

    output [DATA_WIDTH-1:0] result,
    output [ADDRESS_WIDTH-1:0] pcw
);


    // f to d
    wire [ADDRESS_WIDTH-1:0] pc_f_o, pc_plus4_f_o;
    wire [DATA_WIDTH-1:0] instr_f_o;
    wire [$clog2(NUM_THREADS)-1:0] tid_f_o;

    wire [ADDRESS_WIDTH-1:0] pc_d_i, pc_plus4_d_i;
    wire [DATA_WIDTH-1:0] instr_d_i;
    wire [$clog2(NUM_THREADS)-1:0] tid_d_i;

    // d to e
    wire [DATA_WIDTH-1:0] rd1_d_o, rd2_d_o, imm_val_d_o;
    wire [ADDRESS_WIDTH-1:0] pc_d_o, pc_plus4_d_o;
    wire [4:0] rd_d_o;
    wire [3:0] alu_control_d_o;
    wire [1:0] res_src_d_o;
    wire mem_write_d_o, reg_write_d_o, jump_d_o, branch_d_o, alu_src_a_d_o, alu_src_b_d_o;
    wire [2:0] funct3_d_o;
    wire [$clog2(NUM_THREADS)-1:0] tid_d_o;

    wire [DATA_WIDTH-1:0] rd1_e_i, rd2_e_i, imm_val_e_i;
    wire [ADDRESS_WIDTH-1:0] pc_e_i, pc_plus4_e_i;
    wire [4:0] rd_e_i;
    wire [3:0] alu_control_e_i;
    wire [1:0] res_src_e_i;
    wire mem_write_e_i, reg_write_e_i, jump_e_i, branch_e_i, alu_src_a_e_i, alu_src_b_e_i;
    wire [2:0] funct3_e_i;
    wire [$clog2(NUM_THREADS)-1:0] tid_e_i;

    // e to m
    wire [DATA_WIDTH-1:0] alu_result_e_o, write_data_e_o;
    wire [ADDRESS_WIDTH-1:0] pc_target_e_o, pc_plus4_e_o;
    wire pc_src_e_o, mem_write_e_o, reg_write_e_o;
    wire [1:0] res_src_e_o;
    wire [2:0] funct3_e_o;
    wire [4:0] rd_e_o; // rs1_e_o, rs2_e_o,
    wire [$clog2(NUM_THREADS)-1:0] tid_e_o;

    wire [DATA_WIDTH-1:0] alu_result_m_i, write_data_m_i;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_m_i; // pc_target_m_i
    // wire pc_src_m_i;
    wire mem_write_m_i, reg_write_m_i;
    wire [1:0] res_src_m_i;
    wire [2:0] funct3_m_i;
    wire [4:0] rd_m_i;
    wire [$clog2(NUM_THREADS)-1:0] tid_m_i;

    // m to w
    wire reg_write_m_o;
    wire [1:0] result_src_m_o;
    wire [DATA_WIDTH-1:0] alu_result_m_o;
    wire [DATA_WIDTH-1:0] read_data_m_o;
    wire [4:0] rd_m_o;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_m_o;
    wire [$clog2(NUM_THREADS)-1:0] tid_m_o;

    wire reg_write_w_i;
    wire [1:0] result_src_w_i;
    wire [DATA_WIDTH-1:0] alu_result_w_i;
    wire [DATA_WIDTH-1:0] read_data_w_i;
    wire [4:0] rd_w_i;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_w_i;
    wire [$clog2(NUM_THREADS)-1:0] tid_w_i;

    // w to f
    // wire [DATA_WIDTH-1:0] mem_data_w_o,
    wire [DATA_WIDTH-1:0] alu_result_w_o;
    // wire [ADDRESS_WIDTH-1:0] pc_plus4_w_o;
    // wire [1:0] res_src_w_o;
    wire reg_write_w_o;
    wire [4:0] rd_w_o;
    wire [$clog2(NUM_THREADS)-1:0] tid_w_o;

    // wire [DATA_WIDTH-1:0] mem_data_w_o, alu_result_w_o;
    // wire [ADDRESS_WIDTH-1:0] pc_plus4_w_o;
    // wire [1:0] res_src_w_o;
    // wire reg_write_w_o;
    // wire [$clog2(NUM_THREADS)-1:0] tid_w_o;

    // Fetch
    fetch #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .NUM_THREADS(NUM_THREADS),
        .IMEM_SIZE(IMEM_SIZE)
    )
    fetch_stage (
        .clk(clk),
        .rst(rst),
        .pc_src_e(pc_src_e_o),
        .pc_target_e(pc_target_e_o),
        .tid_e(tid_e_o),
        .pc_f(pc_f_o),
        .pc_plus4_f(pc_plus4_f_o),
        .instr_f(instr_f_o),
        .tid_f(tid_f_o)
    );

    // f to d pl_reg

    pl_reg_fd fd (
        .clk(clk),
        .en(1'b0),
        .clr(rst),
        .pc_f(pc_f_o),
        .pc_plus4_f(pc_plus4_f_o),
        .instr_f(instr_f_o),
        .tid_f(tid_f_o),
        .pc_d(pc_d_i),
        .pc_plus4_d(pc_plus4_d_i),
        .instr_d(instr_d_i),
        .tid_d(tid_d_i)
    );

    // Decode
    decode #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .NUM_THREADS(NUM_THREADS)
    )
    decode_stage (
        .clk(clk),
        .reg_write_w(reg_write_w_o),
        .result_w(alu_result_w_o),
        .rd_w(rd_w_o),
        .tid_w(tid_w_o),

        .instr_f(instr_d_i),
        .pc_f(pc_d_i),
        .pc_plus4_f(pc_plus4_d_i),
        .tid_f(tid_d_i),

        .alu_control_d(alu_control_d_o),
        .funct3_d(funct3_d_o),
        .rd1_d(rd1_d_o),
        .rd2_d(rd2_d_o),
        .imm_val_d(imm_val_d_o),
        .pc_plus4_d(pc_plus4_d_o),
        .rd_d(rd_d_o),
        .pc_d(pc_d_o),
        .res_src_d(res_src_d_o),
        .mem_write_d(mem_write_d_o),
        .reg_write_d(reg_write_d_o),
        .jump_d(jump_d_o),
        .branch_d(branch_d_o),
        .alu_src_a_d(alu_src_a_d_o),
        .alu_src_b_d(alu_src_b_d_o),
        .tid_d(tid_d_o)
    );

    // d to e pl_reg
    pl_reg_de de (
        .clk(clk),
        .en (1'b0),
        .clr(rst),

        .reg_write_d(reg_write_d_o),
        .res_src_d(res_src_d_o),
        .mem_write_d(mem_write_d_o),
        .jump_d(jump_d_o),
        .branch_d(branch_d_o),
        .alu_control_d(alu_control_d_o),
        .funct3_d(funct3_d_o),
        .alu_src_b_d(alu_src_b_d_o),
        .alu_src_a_d(alu_src_a_d_o),
        .rd1_d(rd1_d_o),
        .rd2_d(rd2_d_o),
        .pc_d(pc_d_o),
        .rd_d(rd_d_o),
        .imm_val_d(imm_val_d_o),
        .pc_plus4_d(pc_plus4_d_o),
        .tid_d(tid_d_o),

        .reg_write_e(reg_write_e_i),
        .res_src_e(res_src_e_i),
        .mem_write_e(mem_write_e_i),
        .jump_e(jump_e_i),
        .branch_e(branch_e_i),
        .alu_control_e(alu_control_e_i),
        .funct3_e(funct3_e_i),
        .alu_src_b_e(alu_src_b_e_i),
        .alu_src_a_e(alu_src_a_e_i),
        .rd1_e(rd1_e_i),
        .rd2_e(rd2_e_i),
        .pc_e(pc_e_i),
        .rd_e(rd_e_i),
        .imm_val_e(imm_val_e_i),
        .pc_plus4_e(pc_plus4_e_i),
        .tid_e(tid_e_i)
    );
    // Execute
    execute #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .NUM_THREADS(NUM_THREADS)
    )
    execute_stage (
        .reg_write_d(reg_write_e_i),
        .res_src_d(res_src_e_i),
        .mem_write_d(mem_write_e_i),
        .jump_d(jump_e_i),
        .branch_d(branch_e_i),
        .alu_control_d(alu_control_e_i),
        .funct3_d(funct3_e_i),
        .alu_src_b_d(alu_src_b_e_i),
        .alu_src_a_d(alu_src_a_e_i),
        .rd1_d(rd1_e_i),
        .rd2_d(rd2_e_i),
        .pc_d(pc_e_i),
        .rd_d(rd_e_i),
        .imm_val_d(imm_val_e_i),
        .pc_plus4_d(pc_plus4_e_i),
        .tid_d(tid_e_i),

        .reg_write_e(reg_write_e_o),
        .res_src_e(res_src_e_o),
        .mem_write_e(mem_write_e_o),
        .alu_result_e(alu_result_e_o),
        .write_data_e(write_data_e_o),
        .pc_plus4_e(pc_plus4_e_o),
        .pc_target_e(pc_target_e_o),
        .pc_src_e(pc_src_e_o),
        .funct3_e(funct3_e_o),
        .rd_e(rd_e_o),
        .tid_e(tid_e_o)
    );

    // e to m pl_reg
    pl_reg_em em (
        .clk(clk),
        .en (1'b0),
        .clr(rst),

        .reg_write_e(reg_write_e_o),
        .mem_write_e(mem_write_e_o),
        .result_src_e(res_src_e_o),
        .funct3_e(funct3_e_o),
        .alu_result_e(alu_result_e_o),
        .write_data_e(write_data_e_o),
        .rd_e(rd_e_o),
        .pc_plus4_e(pc_plus4_e_o),
        .tid_e(tid_e_o),

        .reg_write_m(reg_write_m_i),
        .mem_write_m(mem_write_m_i),
        .result_src_m(res_src_m_i),
        .funct3_m(funct3_m_i),
        .alu_result_m(alu_result_m_i),
        .write_data_m(write_data_m_i),
        .rd_m(rd_m_i),
        .pc_plus4_m(pc_plus4_m_i),
        .tid_m(tid_m_i)
    );
    // Memory
    memory #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .NUM_THREADS(NUM_THREADS),
        .DMEM_SIZE(DMEM_SIZE)
    )
    memory_stage (
        .clk(clk),
        .reg_write_e(reg_write_m_i),
        .result_src_e(res_src_m_i),
        .mem_write_e(mem_write_m_i),
        .funct3_e(funct3_m_i),
        .alu_result_e(alu_result_m_i),
        .write_data_e(write_data_m_i),
        .rd_e(rd_m_i),
        .pc_plus4_e(pc_plus4_m_i),
        .tid_e(tid_m_i),

        .reg_write_m(reg_write_m_o),
        .result_src_m(result_src_m_o),
        .alu_result_m(alu_result_m_o),
        .read_data_m(read_data_m_o),
        .rd_m(rd_m_o),
        .pc_plus4_m(pc_plus4_m_o),
        .tid_m(tid_m_o)
    );

    // m to w pl_reg
    pl_reg_mw mw (
        .clk(clk),
        .en (1'b0),
        .clr(rst),

        .reg_write_m(reg_write_m_o),
        .result_src_m(result_src_m_o),
        .alu_result_m(alu_result_m_o),
        .read_data_m(read_data_m_o),
        .rd_m(rd_m_o),
        .pc_plus4_m(pc_plus4_m_o),
        .tid_m(tid_m_o),

        .reg_write_w(reg_write_w_i),
        .result_src_w(result_src_w_i),
        .alu_result_w(alu_result_w_i),
        .read_data_w(read_data_w_i),
        .rd_w(rd_w_i),
        .pc_plus4_w(pc_plus4_w_i),
        .tid_w(tid_w_i)
    );

    // Writeback
    writeback #(
        .DATA_WIDTH(DATA_WIDTH),
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .NUM_THREADS(NUM_THREADS)
    )
    writeback_stage (
        .reg_write_m(reg_write_w_i),
        .result_src_m(result_src_w_i),
        .alu_result_m(alu_result_w_i),
        .read_data_m(read_data_w_i),
        .rd_m(rd_w_i),
        .pc_plus4_m(pc_plus4_w_i),
        .tid_m(tid_w_i),

        .result_w(alu_result_w_o),
        .reg_write_w(reg_write_w_o),
        .rd_w(rd_w_o),
        .tid_w(tid_w_o)
    );

    assign result = alu_result_w_i;

    assign pcw = pc_plus4_w_i - 4;

endmodule

module mt_reg_file #(
    parameter NUM_THREADS = 8,
    parameter DATA_WIDTH = 32
    )(
        input clk, write_enable,
        input [$clog2(NUM_THREADS)-1:0] tid_read, tid_write,
        input [4:0] a1, a2, a3,
        input [DATA_WIDTH-1:0] wd3,
        output [DATA_WIDTH-1:0] rd1, rd2
    );



reg [DATA_WIDTH-1:0] reg_array [0:32*NUM_THREADS-1];

integer i;

initial begin
    for(i=0;i<32*NUM_THREADS-1;i=i+1) begin
        reg_array[i] = 32'd0;
    end
end

// synchronous write logic
always @(posedge clk) begin
    if(write_enable) begin
        reg_array[tid_write*32 + a3] <= wd3;
    end
end

//asynchronous read logic
assign rd1 = (a1 == 5'd0) ? (32'd0) : (reg_array[tid_read*32 + a1]);
assign rd2 = (a2 == 5'd0) ? (32'd0) : (reg_array[tid_read*32 + a2]);

endmodule

module pl_reg_mw #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter NUM_THREADS = 8
    )(
    input clk,
    en,
    clr,
    input reg_write_m,
    input [1:0] result_src_m,
    input [DATA_WIDTH-1:0] alu_result_m,
    input [DATA_WIDTH-1:0] read_data_m,
    input [4:0] rd_m,
    input [ADDRESS_WIDTH-1:0] pc_plus4_m,
    input [$clog2(NUM_THREADS)-1:0] tid_m,

    output reg reg_write_w,
    output reg [1:0] result_src_w,
    output reg [DATA_WIDTH-1:0] alu_result_w,
    output reg [DATA_WIDTH-1:0] read_data_w,
    output reg [4:0] rd_w,
    output reg [ADDRESS_WIDTH-1:0] pc_plus4_w,
    output reg [$clog2(NUM_THREADS)-1:0] tid_w
);



    always @(posedge clk) begin
        if (clr) begin
            reg_write_w <= 1'b0;
            result_src_w <= 2'b00;
            alu_result_w <= 32'd0;
            read_data_w <= 32'd0;
            rd_w <= 5'd0;
            pc_plus4_w <= 32'd0;
            tid_w <= 3'd0;
        end else if (!en) begin
            reg_write_w <= reg_write_m;
            result_src_w <= result_src_m;
            alu_result_w <= alu_result_m;
            read_data_w <= read_data_m;
            rd_w <= rd_m;
            pc_plus4_w <= pc_plus4_m;
            tid_w <= tid_m;
        end
    end
endmodule

module reg_file #(
    parameter DATA_WIDTH = 32
    )(
    input clk, write_enable,
    input [4:0] a1, a2, a3,
    input [DATA_WIDTH-1:0] wd3,
    output [DATA_WIDTH-1:0] rd1, rd2
    );

reg [DATA_WIDTH-1:0] reg_array [0:31];

integer i;
initial begin
    for(i=0;i<32;i=i+1) begin
        reg_array[i] = 0;
    end
end

// synchronous write logic
always @(posedge clk) begin
    if(write_enable) reg_array[a3] <= wd3;
end

// combinational read logic
assign rd1 = (a1 == 0) ? 0 : reg_array[a1];
assign rd2 = (a2 == 0) ? 0 : reg_array[a2];

endmodule

module data_memory #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32,
    parameter MEM_SIZE = 64
    )(
    input clk, mem_write_e,
    input [14:12] funct3,
    input [ADDRESS_WIDTH-1:0] data_mem_addr,
    input [DATA_WIDTH-1:0] write_data_e,

    output reg [DATA_WIDTH-1:0] read_data_m
);

// initialise data memory
reg [DATA_WIDTH-1:0] ram [0:MEM_SIZE-1];
// word aligned memory access
/* verilator lint_off UNUSEDSIGNAL */
wire [ADDRESS_WIDTH-1:0] word_addr = {2'd0,data_mem_addr[ADDRESS_WIDTH-1:2]} % MEM_SIZE;
// read word
wire [DATA_WIDTH-1:0] word = ram[word_addr];

integer i;
initial begin
    for(i=0;i<MEM_SIZE;i=i+1) begin
        ram[i] = 0;
    end
end

// asynchronous read logic
always @(*) begin
    case(funct3)
        // lb
        3'b000: begin
            case(data_mem_addr[1:0])
                2'b00: read_data_m = {{24{word[7]}},word[7:0]};
                2'b01: read_data_m = {{24{word[7]}},word[15:8]};
                2'b10: read_data_m = {{24{word[7]}},word[23:16]};
                2'b11: read_data_m = {{24{word[7]}},word[31:24]};
            endcase
        end
        // lbu
        3'b100: begin
            case(data_mem_addr[1:0])
                2'b00: read_data_m = {24'd0,word[7:0]};
                2'b01: read_data_m = {24'd0,word[15:8]};
                2'b10: read_data_m = {24'd0,word[23:16]};
                2'b11: read_data_m = {24'd0,word[31:24]};
            endcase
        end
        // lh
        3'b001: begin
            read_data_m = (data_mem_addr[1]) ? ({{16{word[31]}},word[31:16]}) : ({{16{word[15]}},word[15:0]});
        end
        // lhu
        3'b101: begin
            read_data_m = (data_mem_addr[1]) ? ({16'd0,word[31:16]}) : ({16'd0,word[15:0]});
        end
        3'b010: begin
            read_data_m = word;
        end

        default: begin
            read_data_m = 32'd0;
        end
    endcase
end

// synchronous write logic
always@(posedge clk) begin
    if(mem_write_e) begin
        case(funct3)
            // sb
            3'b000: begin
                case(data_mem_addr[1:0])
                    2'b00: ram[word_addr][7:0] <= write_data_e[7:0];
                    2'b01: ram[word_addr][15:8] <= write_data_e[7:0];
                    2'b10: ram[word_addr][23:16] <= write_data_e[7:0];
                    2'b11: ram[word_addr][31:24] <= write_data_e[7:0];
                endcase
            end

            // sh
            3'b001: begin
                if(data_mem_addr[1]) ram[word_addr][31:16] <= write_data_e[15:0];
                else ram[word_addr][15:0] <= write_data_e[15:0];
            end
            // sw
            3'b010: begin
                ram[word_addr] <= write_data_e;
            end

            default: begin
                ram[word_addr] <= 32'd0;
            end
        endcase
    end

end

endmodule

module reset_ff #(
    parameter DATA_WIDTH=32
    )(
    input clk,rst,en,
    input [DATA_WIDTH-1:0] din,
    output reg [DATA_WIDTH-1:0] dout
);

always @(posedge clk or posedge rst) begin
    if(rst) begin
        dout <= 0;
    end

    else begin
    	// active low enable
    	if(!en)
        	dout <= din;
    end
end

endmodule


//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 01/10/2025 11:02:30 AM
// Design Name:
// Module Name: imm_ext
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module imm_ext(
    input [31:7] instr,
    input [2:0] imm_type,
    output reg [31:0] imm_val
    );

always @(*) begin
    case(imm_type)
        // I-type
        3'b000: imm_val = {{20{instr[31]}},instr[31:20]};
        // S-type
        3'b001: imm_val = {{20{instr[31]}},instr[31:25],instr[11:7]};
        // B-type
        3'b010: imm_val = {{20{instr[31]}},instr[7],instr[30:25],instr[11:8],1'b0};
        // J-type
        3'b011: imm_val = {{12{instr[31]}}, instr[19:12], instr[20], instr[30:21], 1'b0};
        // U-type
        3'b100: imm_val = {instr[31:12],12'b0};
        default: imm_val = 32'dx;
    endcase
end
endmodule

module pl_reg_de #(
	parameter ADDRESS_WIDTH = 32,
	parameter DATA_WIDTH = 32,
	parameter NUM_THREADS = 8
	)(
	input clk,en,clr,

	input reg_write_d,
	input [1:0] res_src_d,
	input mem_write_d, jump_d, branch_d,
	input [3:0] alu_control_d,
	input [14:12] funct3_d,
	input alu_src_b_d, alu_src_a_d,
	input [DATA_WIDTH-1:0] rd1_d, rd2_d,
	input [ADDRESS_WIDTH-1:0] pc_d,
	input [4:0] rd_d,
	input [DATA_WIDTH-1:0] imm_val_d,
	input [ADDRESS_WIDTH-1:0] pc_plus4_d,
	input [$clog2(NUM_THREADS)-1:0] tid_d,

	output reg reg_write_e,
    output reg [1:0] res_src_e,
    output reg mem_write_e, jump_e, branch_e,
    output reg [3:0] alu_control_e,
    output reg [14:12] funct3_e,
    output reg alu_src_b_e, alu_src_a_e,
    output reg [DATA_WIDTH-1:0] rd1_e, rd2_e,
    output reg [ADDRESS_WIDTH-1:0] pc_e,
    output reg [4:0] rd_e,
    output reg [DATA_WIDTH-1:0] imm_val_e,
    output reg [ADDRESS_WIDTH-1:0] pc_plus4_e,
    output reg [$clog2(NUM_THREADS)-1:0] tid_e
);



always@(posedge clk) begin
	if(clr) begin
	reg_write_e <= 0;
    res_src_e <= 0;
    mem_write_e <= 0;
    jump_e <= 0;
    branch_e <= 0;
    alu_control_e <= 0;
    funct3_e <= 0;
    alu_src_b_e <= 0;
    alu_src_a_e <= 0;
    rd1_e <= 0; rd2_e <= 0;
    pc_e <= 0;
    rd_e <= 0;
    imm_val_e <= 0;
    pc_plus4_e <= 0;
    tid_e <= 0;
	end

	else if(!en) begin
	reg_write_e <= reg_write_d;
    res_src_e <= res_src_d;
    mem_write_e <= mem_write_d;
    jump_e <= jump_d;
    branch_e <= branch_d;
    alu_control_e <= alu_control_d;
    funct3_e <= funct3_d;
    alu_src_b_e <= alu_src_b_d;
    alu_src_a_e <= alu_src_a_d;
    rd1_e <= rd1_d; rd2_e <= rd2_d;
    pc_e <= pc_d;
    rd_e <= rd_d;
    imm_val_e <= imm_val_d;
    pc_plus4_e <= pc_plus4_d;
    tid_e <= tid_d;
	end
end

endmodule

module branch_unit #(
    parameter DATA_WIDTH = 32
    )(
    input [DATA_WIDTH-1:0] a,b,
    input [2:0] funct3,
    output reg branch_result
    );

always @(*) begin
    casez(funct3)
        // branch eq, neq
        3'b00?: branch_result = funct3[0] ^ (a == b);
        // branch lt, ge
        3'b10?: branch_result = funct3[0] ^ ($signed(a) < $signed(b));
        // branch ltu, geu
        3'b11?: branch_result = funct3[0] ^ (a < b);
        default: branch_result = 0;
    endcase
end

endmodule

module mt_pc #(
    parameter NUM_THREADS = 8,
    parameter ADDRESS_WIDTH = 32
    )(
    input clk,rst,
    input [$clog2(NUM_THREADS)-1:0] tid,
    input pc_src_e,
    input [$clog2(NUM_THREADS)-1:0] branch_tid_e,
    input [ADDRESS_WIDTH-1:0] pc_target_e,
    output reg [ADDRESS_WIDTH-1:0] pc,
    output [ADDRESS_WIDTH-1:0] pc_plus4
    );



reg [ADDRESS_WIDTH-1:0] t_pc [NUM_THREADS-1:0];

integer i;

always @(*) begin
    // combinational read, avoid glitch
    pc = t_pc[tid];
end

always @(posedge clk) begin
    if(rst) begin
        // clear all PC vals to 0
        // change later to seperate start vectors
        for(i=0;i<NUM_THREADS;i=i+1) begin
            t_pc[i] <= {ADDRESS_WIDTH{1'd0}};
        end
    end

    else begin
        // sequential update of pc
        t_pc[tid] <= pc_plus4;
        // if branch/jump instruction, change pc accordingly
        if(pc_src_e)
            t_pc[branch_tid_e] <= pc_target_e;
    end
end

assign pc_plus4 = pc + 4;
endmodule

module cpu #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32
    )(
    input clk,
    input rst,

    output [DATA_WIDTH-1:0] result,
    output [ADDRESS_WIDTH-1:0] pcw
);

    // f to d
    wire [ADDRESS_WIDTH-1:0] pc_f_i, pc_plus4_f_i;
    wire [DATA_WIDTH-1:0] instr_f_i;

    wire [ADDRESS_WIDTH-1:0] pc_f_o, pc_plus4_f_o;
    wire [DATA_WIDTH-1:0] instr_f_o;

    // d to e
    wire [DATA_WIDTH-1:0] instr_d_i, rd1_d_i, rd2_d_i, imm_val_d_i;
    wire [ADDRESS_WIDTH-1:0] pc_d_i, pc_plus4_d_i;
    wire [4:0] rs1_d_i, rs2_d_i, rd_d_i;
    wire [3:0] alu_control_d_i;
    wire [1:0] res_src_d_i;
    wire mem_write_d_i, reg_write_d_i, jump_d_i, branch_d_i, alu_src_a_d_i, alu_src_b_d_i, adder_src_d_i;
    wire [2:0] funct3_d_i;

    wire [DATA_WIDTH-1:0] instr_d_o, rd1_d_o, rd2_d_o, imm_val_d_o;
    wire [ADDRESS_WIDTH-1:0] pc_d_o, pc_plus4_d_o;
    wire [4:0] rs1_d_o, rs2_d_o, rd_d_o;
    wire [3:0] alu_control_d_o;
    wire [1:0] res_src_d_o;
    wire mem_write_d_o, reg_write_d_o, jump_d_o, branch_d_o, alu_src_a_d_o, alu_src_b_d_o, adder_src_d_o;
    wire [2:0] funct3_d_o;

    // e to m
    wire [DATA_WIDTH-1:0] alu_result_e_i, write_data_e_i;
    wire [ADDRESS_WIDTH-1:0] pc_target_e_i, pc_plus4_e_i;
    wire pc_src_e_i, mem_write_e_i, reg_write_e_i;
    wire [1:0] res_src_e_i;
    wire [2:0] funct3_e_i;
    wire [4:0] rs1_e_i, rs2_e_i, rd_e_i;

    wire [DATA_WIDTH-1:0] alu_result_e_o, write_data_e_o;
    wire [ADDRESS_WIDTH-1:0] pc_target_e_o, pc_plus4_e_o;
    wire pc_src_e_o, mem_write_e_o, reg_write_e_o;
    wire [1:0] res_src_e_o;
    wire [2:0] funct3_e_o;
    wire [4:0] rd_e_o;

    // m to w
    wire reg_write_m_i;
    wire [1:0] result_src_m_i;
    wire [DATA_WIDTH-1:0] alu_result_m_i;
    wire [DATA_WIDTH-1:0] read_data_m_i;
    wire [4:0] rd_m_i;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_m_i;

    wire reg_write_m_o;
    wire [1:0] result_src_m_o;
    wire [DATA_WIDTH-1:0] alu_result_m_o;
    wire [DATA_WIDTH-1:0] read_data_m_o;
    wire [4:0] rd_m_o;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_m_o;

    // w to f
    wire [DATA_WIDTH-1:0] mem_data_w_i, alu_result_w_i;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_w_i;
    wire [1:0] res_src_w_i;
    wire reg_write_w_i;
    wire [4:0] rd_w_i;

    wire [DATA_WIDTH-1:0] mem_data_w_o, alu_result_w_o;
    wire [ADDRESS_WIDTH-1:0] pc_plus4_w_o;
    wire [1:0] res_src_w_o;
    wire reg_write_w_o;

    // hazards
    wire stall_f, stall_d, flush_d, flush_e;
    wire [1:0] forward_a_e, forward_b_e;

    hazard hazard_unit(
        .rs1_d(instr_f_o[19:15]),
        .rs2_d(instr_f_o[24:20]),
    	.rs1_e(rs1_d_o),
    	.rs2_e(rs2_d_o),
    	.rd_e(rd_d_o),
    	.pc_src_e(pc_src_e_i),
    	.res_src_e_b0(res_src_d_o[0]),
    	.rd_m(rd_e_o),
    	.reg_write_m(reg_write_e_o),
    	.rd_w(rd_m_o),
    	.reg_write_w(reg_write_m_o),

    	.stall_f(stall_f),
    	.stall_d(stall_d),
    	.flush_d(flush_d),
    	.flush_e(flush_e),
    	.forward_a_e(forward_a_e),
    	.forward_b_e(forward_b_e)
    );

    // Fetch
    fetch fetch_stage (
        .clk(clk),
        .en(stall_f),
        .rst(rst),
        .pc_src_e(pc_src_e_i),
        .pc_target_e(pc_target_e_i),
        .pc_f(pc_f_i),
        .pc_plus4_f(pc_plus4_f_i),
        .instr_f(instr_f_i)
    );

    // f to d pl_reg

    pl_reg_fd fd (
        .clk(clk),
        .en(stall_f),
        .clr(rst),
        .pc_f_i(pc_f_i),
        .pc_plus4_f_i(pc_plus4_f_i),
        .instr_f_i(instr_f_i),
        .pc_f_o(pc_f_o),
        .pc_plus4_f_o(pc_plus4_f_o),
        .instr_f_o(instr_f_o)
    );

    // Decode
    decode decode_stage (
        .clk(clk),
        .reg_write_w(reg_write_w_i),
        .result_w(alu_result_w_i),
        .rd_w(rd_w_i),

        .instr_f(instr_f_o),
        .pc_f(pc_f_o),
        .pc_plus4_f(pc_plus4_f_o),

        .alu_control_d(alu_control_d_i),
        .funct3_d(funct3_d_i),
        .rd1_d(rd1_d_i),
        .rd2_d(rd2_d_i),
        .imm_val_d(imm_val_d_i),
        .pc_plus4_d(pc_plus4_d_i),
        .rs1_d(rs1_d_i),
        .rs2_d(rs2_d_i),
        .rd_d(rd_d_i),
        .pc_d(pc_d_i),
        .res_src_d(res_src_d_i),
        .mem_write_d(mem_write_d_i),
        .reg_write_d(reg_write_d_i),
        .jump_d(jump_d_i),
        .branch_d(branch_d_i),
        .alu_src_a_d(alu_src_a_d_i),
        .alu_src_b_d(alu_src_b_d_i),
        .adder_src_d(adder_src_d_i)
    );

    // d to e pl_reg
    pl_reg_de de (
        .clk(clk),
        .en (1'b0),
        .clr(flush_e | rst),

        .reg_write_d_i(reg_write_d_i),
        .res_src_d_i(res_src_d_i),
        .mem_write_d_i(mem_write_d_i),
        .jump_d_i(jump_d_i),
        .branch_d_i(branch_d_i),
        .alu_control_d_i(alu_control_d_i),
        .funct3_d_i(funct3_d_i),
        .alu_src_b_d_i(alu_src_b_d_i),
        .alu_src_a_d_i(alu_src_a_d_i),
        .adder_src_d_i(adder_src_d_i),
        .rd1_d_i(rd1_d_i),
        .rd2_d_i(rd2_d_i),
        .pc_d_i(pc_d_i),
        .rs1_d_i(rs1_d_i),
        .rs2_d_i(rs2_d_i),
        .rd_d_i(rd_d_i),
        .imm_val_d_i(imm_val_d_i),
        .pc_plus4_d_i(pc_plus4_d_i),

        .reg_write_d_o(reg_write_d_o),
        .res_src_d_o(res_src_d_o),
        .mem_write_d_o(mem_write_d_o),
        .jump_d_o(jump_d_o),
        .branch_d_o(branch_d_o),
        .alu_control_d_o(alu_control_d_o),
        .funct3_d_o(funct3_d_o),
        .alu_src_b_d_o(alu_src_b_d_o),
        .alu_src_a_d_o(alu_src_a_d_o),
        .adder_src_d_o(adder_src_d_o),
        .rd1_d_o(rd1_d_o),
        .rd2_d_o(rd2_d_o),
        .pc_d_o(pc_d_o),
        .rs1_d_o(rs1_d_o),
        .rs2_d_o(rs2_d_o),
        .rd_d_o(rd_d_o),
        .imm_val_d_o(imm_val_d_o),
        .pc_plus4_d_o(pc_plus4_d_o)
    );
    // Execute
    execute execute_stage (
        .reg_write_d(reg_write_d_o),
        .res_src_d(res_src_d_o),
        .mem_write_d(mem_write_d_o),
        .jump_d(jump_d_o),
        .branch_d(branch_d_o),
        .alu_control_d(alu_control_d_o),
        .funct3_d(funct3_d_o),
        .alu_src_b_d(alu_src_b_d_o),
        .alu_src_a_d(alu_src_a_d_o),
        .adder_src_d(adder_src_d_o),
        .rd1_d(rd1_d_o),
        .rd2_d(rd2_d_o),
        .pc_d(pc_d_o),
        .rs1_d(rs1_d_o),
        .rs2_d(rs2_d_o),
        .rd_d(rd_d_o),
        .imm_val_d(imm_val_d_o),
        .pc_plus4_d(pc_plus4_d_o),

        .alu_result_m(alu_result_m_i),
        .alu_result_w(alu_result_w_i),
        .forward_a_e(forward_a_e),
        .forward_b_e(forward_b_e),

        .reg_write_e(reg_write_e_i),
        .res_src_e(res_src_e_i),
        .mem_write_e(mem_write_e_i),
        .alu_result_e(alu_result_e_i),
        .write_data_e(write_data_e_i),
        .pc_plus4_e(pc_plus4_e_i),
        .pc_target_e(pc_target_e_i),
        .pc_src_e(pc_src_e_i),
        .funct3_e(funct3_e_i),
        .rd_e(rd_e_i)
    );

    // e to m pl_reg
    pl_reg_em em (
        .clk(clk),
        .en (1'b0),
        .clr(rst),

        .reg_write_e_i(reg_write_e_i),
        .mem_write_e_i(mem_write_e_i),
        .result_src_e_i(res_src_e_i),
        .funct3_e_i(funct3_e_i),
        .alu_result_e_i(alu_result_e_i),
        .write_data_e_i(write_data_e_i),
        .rd_e_i(rd_e_i),
        .pc_plus4_e_i(pc_plus4_e_i),

        .reg_write_e_o(reg_write_e_o),
        .mem_write_e_o(mem_write_e_o),
        .result_src_e_o(res_src_e_o),
        .funct3_e_o(funct3_e_o),
        .alu_result_e_o(alu_result_e_o),
        .write_data_e_o(write_data_e_o),
        .rd_e_o(rd_e_o),
        .pc_plus4_e_o(pc_plus4_e_o)
    );
    // Memory
    memory memory_stage (
        .clk(clk),
        .reg_write_e(reg_write_e_o),
        .result_src_e(res_src_e_o),
        .mem_write_e(mem_write_e_o),
        .funct3_e(funct3_e_o),
        .alu_result_e(alu_result_e_o),
        .write_data_e(write_data_e_o),
        .rd_e(rd_e_o),
        .pc_plus4_e(pc_plus4_e_o),

        .reg_write_m(reg_write_m_i),
        .result_src_m(result_src_m_i),
        .alu_result_m(alu_result_m_i),
        .read_data_m(read_data_m_i),
        .rd_m(rd_m_i),
        .pc_plus4_m(pc_plus4_m_i)
    );

    // m to w pl_reg
    pl_reg_mw mw (
        .clk(clk),
        .en (1'b0),
        .clr(rst),

        .reg_write_m_i(reg_write_m_i),
        .result_src_m_i(result_src_m_i),
        .alu_result_m_i(alu_result_m_i),
        .read_data_m_i(read_data_m_i),
        .rd_m_i(rd_m_i),
        .pc_plus4_m_i(pc_plus4_m_i),

        .reg_write_m_o(reg_write_m_o),
        .result_src_m_o(result_src_m_o),
        .alu_result_m_o(alu_result_m_o),
        .read_data_m_o(read_data_m_o),
        .rd_m_o(rd_m_o),
        .pc_plus4_m_o(pc_plus4_m_o)
    );

    // Writeback
    writeback writeback_stage (
        .reg_write_m(reg_write_m_o),
        .result_src_m(result_src_m_o),
        .alu_result_m(alu_result_m_o),
        .read_data_m(read_data_m_o),
        .rd_m(rd_m_o),
        .pc_plus4_m(pc_plus4_m_o),

        .result_w(alu_result_w_i),
        .reg_write_w(reg_write_w_i),
        .rd_w(rd_w_i)
    );

    assign result = alu_result_w_i;

    assign pcw = pc_plus4_m_o - 4;

endmodule

module hazard #(
	parameter ADDRESS_WIDTH = 32,
	parameter DATA_WIDTH = 32
	)(
	input [4:0] rs1_d, rs2_d,

	input [4:0] rs1_e, rs2_e, rd_e,
	input pc_src_e,
	input res_src_e_b0,

	input [4:0] rd_m,
	input reg_write_m,

	input [4:0] rd_w,
	input reg_write_w,

	output stall_f,

	output stall_d, flush_d,

	output flush_e,
	output [1:0] forward_a_e, forward_b_e
);

wire lw_stall;

assign lw_stall = res_src_e_b0 & ((rs1_d == rd_e) | (rs2_d == rd_e));

assign stall_f = lw_stall;
assign stall_d = lw_stall;

assign forward_a_e = (((rs1_e == rd_m) & reg_write_m) & (rs1_e != 0)) ? 2'b01 : ( (((rs1_e == rd_w) & reg_write_w) & (rs1_e != 0)) ? 2'b10 : 2'b00);

assign forward_b_e = (((rs2_e == rd_m) & reg_write_m) & (rs2_e != 0)) ? 2'b01 : ( (((rs2_e == rd_w) & reg_write_w) & (rs2_e != 0)) ? 2'b10 : 2'b00);

assign flush_d = pc_src_e;
assign flush_e = lw_stall | pc_src_e;

endmodule


//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 12/27/2024 11:59:53 AM
// Design Name:
// Module Name: execute
// Project Name:
// Target Devices:
// Tool Versions:
// Description:
//
// Dependencies:
//
// Revision:
// Revision 0.01 - File Created
// Additional Comments:
//
//////////////////////////////////////////////////////////////////////////////////


module execute #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32,
    parameter NUM_THREADS = 8
    )(
    input reg_write_d,
    input [1:0] res_src_d,
    input mem_write_d, jump_d, branch_d,
    input [3:0] alu_control_d,
    input [14:12] funct3_d,
    input alu_src_b_d, alu_src_a_d,
    input [DATA_WIDTH-1:0] rd1_d, rd2_d,
    input [ADDRESS_WIDTH-1:0] pc_d,
    input [4:0] rd_d,
    input [DATA_WIDTH-1:0] imm_val_d,
    input [ADDRESS_WIDTH-1:0] pc_plus4_d,
    input [$clog2(NUM_THREADS)-1:0] tid_d,

    output reg_write_e,
    output [1:0] res_src_e,
    output mem_write_e,
    output [14:12] funct3_e,

    output [DATA_WIDTH-1:0] alu_result_e,
    output [DATA_WIDTH-1:0] write_data_e,
    output [4:0] rd_e,
    output [ADDRESS_WIDTH-1:0] pc_plus4_e,

    output [ADDRESS_WIDTH-1:0] pc_target_e,
    output pc_src_e,
    output [$clog2(NUM_THREADS)-1:0] tid_e
);



wire [DATA_WIDTH-1:0] a_alu, b_alu;
wire branch_result;

alu #(
    .DATA_WIDTH(DATA_WIDTH)
    )
    main_alu (
    .a(a_alu),
    .b(b_alu),
    .alu_controls(alu_control_d),
    .res(alu_result_e)
);

branch_unit #(
    .DATA_WIDTH(DATA_WIDTH)
    )
    bu (
    .a(rd1_d),
    .b(rd2_d),
    .funct3(funct3_d),
    .branch_result(branch_result)
);

assign a_alu = alu_src_a_d ? pc_d : rd1_d;
assign b_alu = alu_src_b_d ? imm_val_d : rd2_d;

// banch target address
assign pc_target_e = alu_result_e;
// branch outcome
assign pc_src_e = jump_d | (branch_d & branch_result);

assign write_data_e = rd2_d;
assign reg_write_e = reg_write_d;
assign res_src_e = res_src_d;
assign mem_write_e = mem_write_d;
assign pc_plus4_e = pc_plus4_d;
assign funct3_e = funct3_d;
assign rd_e = rd_d;
assign tid_e = tid_d;

endmodule

module adder #(
    parameter DATA_WIDTH = 32
    )(
    input [DATA_WIDTH-1:0] a,b,
    output [DATA_WIDTH-1:0] res
);

assign res = a+b;

endmodule

module fetch #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32,
    parameter IMEM_SIZE = 1024,
    parameter NUM_THREADS = 8
) (
    input clk, rst,

    input pc_src_e,
    input [ADDRESS_WIDTH-1:0] pc_target_e,
    input [$clog2(NUM_THREADS)-1:0] tid_e,

    output [ADDRESS_WIDTH-1:0] pc_f, pc_plus4_f,
    output [DATA_WIDTH-1:0] instr_f,
    output [$clog2(NUM_THREADS)-1:0] tid_f

);



    wire [31:0] pc;
    wire [$clog2(NUM_THREADS)-1:0] tid;

    thread_sel #(
    .NUM_THREADS(NUM_THREADS)
    )
    ts(
        .clk(clk),
        .rst(rst),
        .tid(tid)
    );

    mt_pc #(
        .NUM_THREADS(NUM_THREADS),
        .ADDRESS_WIDTH(ADDRESS_WIDTH)
    )
    thread_pc(
        .clk(clk),
        .rst(rst),
        .tid(tid),
        .pc_src_e(pc_src_e),
        .branch_tid_e(tid_e),
        .pc_target_e(pc_target_e),
        .pc(pc),
        .pc_plus4(pc_plus4_f)
    );

    instr_mem #(
        .ADDRESS_WIDTH(ADDRESS_WIDTH),
        .DATA_WIDTH(DATA_WIDTH),
        .MEM_SIZE(IMEM_SIZE)
    )
    i_mem (
        .instr_addr(pc),
        .instr(instr_f)
    );

    assign pc_f = pc;
    assign tid_f = tid;

endmodule

module alu #(
    parameter DATA_WIDTH = 32
    )(
    input [DATA_WIDTH-1:0] a,b,
    input [3:0] alu_controls,
    output reg [DATA_WIDTH-1:0] res
);

always @(*) begin
    case(alu_controls)
        4'b0000: res = a+b;
        4'b0001: res = a-b;
        4'b0010: res = a << (b[4:0]);
        4'b0011: res = ($signed(a) < $signed(b)) ? 32'd1 : 32'd0;
        4'b0100: res = ($unsigned(a) < $unsigned(b)) ? 32'd1 : 32'd0;
        4'b0101: res = a^b;
        4'b0110: res = a >> (b[4:0]);
        4'b0111: res = $signed(a) >>> (b[4:0]);
        4'b1000: res = a | b;
        4'b1001: res = a & b;
        4'b1101: res = b;
        default: res = 32'd0;
    endcase
end
endmodule
