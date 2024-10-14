#include "main.h"
/**
 * print_number - Prints an integer with putchar
 * @n: Required. A number.
 *
 */
void print_number(int n)
{
	unsigned int x;

	if (n < 0)
	{
		x = (unsigned int)n * -1;
		_putchar('-');
	}
	else
	{
		x = (unsigned int)n;
	}

	if (x / 10)
		print_number(x / 10);
	_putchar((x % 10) + '0');
}
