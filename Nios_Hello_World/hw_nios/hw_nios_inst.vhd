	component hw_nios is
		port (
			clk_clk                          : in  std_logic := 'X'; -- clk
			reset_reset_n                    : in  std_logic := 'X'; -- reset_n
			pio_0_external_connection_export : out std_logic         -- export
		);
	end component hw_nios;

	u0 : component hw_nios
		port map (
			clk_clk                          => CONNECTED_TO_clk_clk,                          --                       clk.clk
			reset_reset_n                    => CONNECTED_TO_reset_reset_n,                    --                     reset.reset_n
			pio_0_external_connection_export => CONNECTED_TO_pio_0_external_connection_export  -- pio_0_external_connection.export
		);

