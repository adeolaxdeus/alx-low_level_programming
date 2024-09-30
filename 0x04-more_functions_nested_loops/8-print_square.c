#include "main.h"
/**
 * print_square - Print a square.
 * @size: Required. Size of square (a number).
 *
 */
void print_square(int size)
{
	int col = size;
	int row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (col > 0)
	{
		row = size;
		while (row > 0)
		{
			_putchar('#');
			row--;
		}
		_putchar('\n');
		col--;
	}
}
