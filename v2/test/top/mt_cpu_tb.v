module mt_cpu_tb ();
    parameter ADDRESS_WIDTH = 32;
    parameter DATA_WIDTH = 32;

    reg rst, clk;
    /* verilator lint_off UNUSEDSIGNAL */
    wire [DATA_WIDTH-1:0] result;
    /* verilator lint_off UNUSEDSIGNAL */
    wire [ADDRESS_WIDTH-1:0] pcw;

    mt_cpu dut (
        .clk(clk),
        .rst(rst),

        .result(result),
        .pcw(pcw)
    );

    initial begin
        clk = 0;
    end

    always #5 clk = ~clk;

    initial begin
        $dumpfile("dumpfile.vcd");
        $dumpvars(0, mt_cpu_tb);

        rst = 1;
        #10 rst = 0;

        #5000 $finish();

    end
endmodule
