# TestSoftware
You need:
- Quartus Prime 21.1 Lite
- For programmimg device https://www.intel.com/content/www/us/en/support/programmable/articles/000079168.html
- Eclipse Mars for Nios https://www.terasic.com.tw/wiki/Getting_Start_Install_Eclipse_IDE_into_Nios_EDS
- wsl https://www.intel.com/content/www/us/en/docs/programmable/683525/21-3/installing-windows-subsystem-for-linux.html

To run:
- Open qpf file with Quartus, compile it and program the FPGA
- Open Eclipse from Quartus -> Tools -> Nios II Software Build Tools for Eclipse
- Check if on line 104 in Makefile from bsp project from software folder is the correct path to .sopcinfo file
- Import projects from software folder https://www.youtube.com/watch?v=o-t2e0hxNHc&ab_channel=roseindiatutorials
- Build Projects (the one with C source code + bps) - first build bps - and run it as Nios Hardware
