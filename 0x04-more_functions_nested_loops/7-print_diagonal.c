#include "main.h"
/**
 * print_diagonal - Print n number of times the charactwr '\'.
 * @n: Required. An integer.
 *
 */
void print_diagonal(int n)
{
	int tab;
	int temp = 0;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	while (n > 0)
	{
		tab = temp; /* temp store and count number of tab to printed */
		while (tab > 0)
		{
			_putchar(' ');
			tab--;
		}
		_putchar('\\');
		_putchar('\n');
		temp++;
		n--;
	}
}
