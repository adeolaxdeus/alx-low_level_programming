#include "main.h"
/**
 * print_number - Print a given number
 * @n: Required. A number
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
	}
	if (n == 0)
	{
		_putchar('0');
		return;
	}
	if (n / 10)
		print_number(n / 10);
	_putchar((n % 10) + '0');
}
