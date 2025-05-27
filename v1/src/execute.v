module execute #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32
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
    input [DATA_WIDTH-1:0] alu_result_m,
    input [DATA_WIDTH-1:0] alu_result_w,
    input [1:0] forward_a_e, forward_b_e,

    output reg_write_e,
    output [1:0] res_src_e,
    output mem_write_e,
    output [14:12] funct3_e,

    output [DATA_WIDTH-1:0] alu_result_e,
    output [DATA_WIDTH-1:0] write_data_e,
    output [4:0] rd_e,
    output [ADDRESS_WIDTH-1:0] pc_plus4_e,

    output [ADDRESS_WIDTH-1:0] pc_target_e,
    output pc_src_e
);


wire [DATA_WIDTH-1:0] a_alu, b_alu;
wire [DATA_WIDTH-1:0] rd1, rd2;
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

assign rd1 = (forward_a_e == 2'b00) ? rd1_d :
             (forward_a_e == 2'b01) ? alu_result_m :
             (forward_a_e == 2'b10) ? alu_result_w :
             {DATA_WIDTH{1'bx}};

assign rd2 = (forward_b_e == 2'b00) ? rd2_d :
             (forward_b_e == 2'b01) ? alu_result_m :
             (forward_b_e == 2'b10) ? alu_result_w :
             {DATA_WIDTH{1'bx}};

assign a_alu = alu_src_a_d ? pc_d : rd1;
assign b_alu = alu_src_b_d ? imm_val_d : rd2;

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

endmodule
