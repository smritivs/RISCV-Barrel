module mt_pc #(
    parameter NUM_THREADS = 8,
    parameter ADDRESS_WIDTH = 32
    )(
    input clk,rst,
    input [BITS_THREADS-1:0] tid,
    input pc_src_e,
    input [BITS_THREADS-1:0] branch_tid_e,
    input [ADDRESS_WIDTH-1:0] pc_target_e,
    output reg [ADDRESS_WIDTH-1:0] pc,
    output [ADDRESS_WIDTH-1:0] pc_plus4
    );

localparam BITS_THREADS = $clog2(NUM_THREADS);

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
