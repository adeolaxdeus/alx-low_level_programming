#include "main.h"
/**
 * print_most_numbers - Print 0-9 except 2 & 4.
 *
 */
void print_most_numbers(void)
{
	char i = 0;

	while (i < 10)
	{
		if (i == 2 || i == 4)
		{
			i++;
			continue;
		}
		_putchar(i + '0');
		i++;
	}
	_putchar('\n');
}
