#include "main.h"
/**
 * jack_bauer - prints every minute of the day of Jack Bauer, starting
 * from 00:00 to 23:59.
 *
 */
void jack_bauer(void)
{
	int hours = 0;
	int min;

	while (hours < 24)
	{
		min = 0;
		while (min < 60)
		{
			_putchar((hours / 10) + '0');
			_putchar((hours % 10) + '0');
			_putchar(':');
			_putchar((min / 10) + '0');
			_putchar((min % 10) + '0');
			_putchar('\n');
			min++;
		}
		hours++;
	}
}
