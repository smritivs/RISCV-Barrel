module writeback #(
    parameter ADDRESS_WIDTH = 32,
    parameter DATA_WIDTH = 32
) (
    input reg_write_m,
    input [1:0] result_src_m,
    input [DATA_WIDTH-1:0] alu_result_m,
    input [DATA_WIDTH-1:0] read_data_m,
    input [4:0] rd_m,
    input [ADDRESS_WIDTH-1:0] pc_plus4_m,

    output [DATA_WIDTH-1:0] result_w,
    output reg_write_w,
    output [4:0] rd_w
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

endmodule
