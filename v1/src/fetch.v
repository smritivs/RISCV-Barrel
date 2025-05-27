module fetch #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32,
    parameter IMEM_SIZE = 1024
) (
    input clk, rst, en,

    input pc_src_e,
    input [ADDRESS_WIDTH-1:0] pc_target_e,

    output [ADDRESS_WIDTH-1:0] pc_f, pc_plus4_f,
    output [DATA_WIDTH-1:0] instr_f

);

    reg [ADDRESS_WIDTH-1:0] pc;

    always@(posedge clk) begin
        if(rst)
            pc <= 0;

        else if(!en)
            pc <= (pc_src_e) ? pc_target_e : pc + 4;

    end

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
    assign pc_plus4_f = pc_f + 4;

endmodule
