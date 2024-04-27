#include "main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: number of times to print a line on stdout
 *
 */
void print_line(int n)
{
	int count = 0;

	if (!(n == 0 && n < 0))
	{
		while (count < n)
		{
			_putchar('_');
			count++;
		}
	_putchar('\n');
	}
	else
		_putchar('\n');
}
