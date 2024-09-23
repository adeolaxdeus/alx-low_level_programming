#include "main.h"
/**
 * print - Print a double digit f6gure.
 * @num: Required. A number with two digit
 *
 */
void print(int num, int flag)
{
	if (num > 9)
	{
		_putchar((num / 10) + '0');
		_putchar((num % 10) + '0');
	}
	else
	{
		if (flag != 0)
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
	int flag = 0; /* Determine to when to print a space */

	while (col < 10)
	{
		row = 0;
		while (row < 10)
		{
			print(col * row, flag=row);
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
