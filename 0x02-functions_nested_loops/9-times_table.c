#include "main.h"
/**
 * print - Print a double digit f6gure.
 * @num: Required. A number with two digit
 *
 */
void print(int num)
{
	if (num > 9)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		_putchar(' ');
		_putchar(num + '0');
	}
}

/**
 * times_table - Prints the 9 times table.
 *
 */
void times_table(void)
{
	int col = 0;
	int row;

	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			print(col * row);
			if (row != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			row++;
		}
		_putchar('\n');
		col++;
	}
}
