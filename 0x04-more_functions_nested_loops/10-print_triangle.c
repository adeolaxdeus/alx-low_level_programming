#include "main.h"
/**
 * print_triangle - Print a triangle"
 * @size: Required. This is the size of the triangle to be print.
 *
 */
void print_triangle(int size)
{
	int col = 1;
	int space, row;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}
	while (col <= size)
	{
		space = size;
		while (space > col)
		{
			_putchar(' ');
			space--;
		}
		row = 0;
		while (row < col)
		{
			_putchar('#');
			row++;
		}
		_putchar('\n');
		col++;
	}
}
