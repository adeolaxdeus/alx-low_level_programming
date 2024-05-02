#include "main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: size of triangle to be printed
 *
 */
void print_triangle(int size)
{
	int row = 1, space, hash;

	if (size == 0 || size < 0)
	{
		_putchar('\n');
	}
	else
	{
		while (row <= size)
		{
			space = size - row;
			while (space > 0)
			{
				_putchar(' ');
				space--;
			}
			hash = 0;
			while (hash < row)
			{
				_putchar('#');
				hash++;
			}
			row++;
			_putchar('\n');
		}
	}
}
