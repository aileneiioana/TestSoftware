
#include <system.h>
#include <altera_avalon_pio_regs.h>
#include <alt_types.h>
#include <stdio.h>
#include <unistd.h>
#include <sys/alt_irq.h>
#include <io.h>

alt_u16 LED_value;


int main()
{
  alt_putstr("Hello from Nios II!\n");

  while(1)
  {
	IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE,0x01);
	usleep(5000);
	alt_putstr("Led ON!\n");
	IOWR_ALTERA_AVALON_PIO_DATA(PIO_0_BASE,0x00);
    usleep(5000);
    alt_putstr("Led OFF!\n");
   }
  return 0;
}

