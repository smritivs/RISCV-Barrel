
//////////////////////////////////////////////////////////////////////////////////
// Company:
// Engineer:
//
// Create Date: 12/27/2024 11:59:53 AM
// Design Name:
// Module Name: fetch
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

module fetch #(
    parameter DATA_WIDTH = 32,
    parameter ADDRESS_WIDTH = 32,
    parameter IMEM_SIZE = 1024,
    parameter NUM_THREADS = 8
) (
    input clk, rst,

    input pc_src_e,
    input [ADDRESS_WIDTH-1:0] pc_target_e,
    input [BITS_THREADS-1:0] tid_e,

    output [ADDRESS_WIDTH-1:0] pc_f, pc_plus4_f,
    output [DATA_WIDTH-1:0] instr_f,
    output [BITS_THREADS-1:0] tid_f

);

localparam BITS_THREADS = $clog2(NUM_THREADS);

    wire [31:0] pc;
    wire [BITS_THREADS-1:0] tid;

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
