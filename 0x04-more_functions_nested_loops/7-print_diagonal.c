#include "main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: number of times to print \ on stdout
 *
 */
void print_diagonal(int n)
{
	int count = 1;
	int count2;

	if (n == 0 || n < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (count <= n)
		{
			count2 = 1;
			while (count2 < count)
			{
				_putchar(' ');
				count2++;
			}
			_putchar('\\');
			_putchar('\n');
			count++;
		}
	}
}
