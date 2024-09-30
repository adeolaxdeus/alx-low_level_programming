#include "main.h"
/**
 * print_line - Print n number of times the character '_'.
 * @n: Required. Number of times to print '_'
 *
 */
void print_line(int n)
{
	while (n > 0)
	{
		_putchar('_');
		n--;
	}
	_putchar('\n');
}
