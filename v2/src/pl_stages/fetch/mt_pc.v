module mt_pc #(
    parameter NUM_THREADS = 8,
    parameter BITS_THREADS = $clog2(NUM_THREADS),
    parameter ADDRESS_WIDTH = 32
    )(
    input clk,rst,
    input [BITS_THREADS-1:0] tid,
    input pc_src_e,
    input [BITS_THREADS-1:0] branch_tid_e,
    input [ADDRESS_WIDTH-1:0] pc_target_e,
    output reg [ADDRESS_WIDTH-1:0] pc
    );

reg [ADDRESS_WIDTH-1:0] t_pc [NUM_THREADS-1:0];

integer i;

always @(posedge clk) begin
    if(rst) begin
        // clear all PC vals to 0
        // change later to seperate start vectors
        for(i=0;i<NUM_THREADS;i=i+1) begin
            t_pc[i] <= {ADDRESS_WIDTH{1'd0}};
        end
    end

    else begin
        // get pc of current thread
        pc <= t_pc[tid];
        // update tid of thread in ex stage
        t_pc[branch_tid_e] <= (pc_src_e) ? (pc_target_e) : (t_pc[branch_tid_e] + 4);
    end

end

endmodule
