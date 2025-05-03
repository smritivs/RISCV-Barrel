module mt_reg_file #(
    parameter NUM_THREADS = 8,
    parameter DATA_WIDTH = 32
    )(
        input clk, write_enable,
        input [BITS_THREADS-1:0] tid_read, tid_write,
        input [4:0] a1, a2, a3,
        input [DATA_WIDTH-1:0] wd3,
        output [DATA_WIDTH-1:0] rd1, rd2
    );

localparam BITS_THREADS = $clog2(NUM_THREADS);

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
