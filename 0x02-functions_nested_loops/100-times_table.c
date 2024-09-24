#include "main.h"
/**
 * print - Print numbers
 * @x: Required . Number to be print.
 * @flag: Required. Determine when to print space before a digit.
 *
 */
void print(int x, int flag)
{
	if (x > 99)
	{
		_putchar((x / 100) + '0');
		_putchar(((x / 10) % 10) + '0');
		_putchar((x % 10) + '0');
	}
	else if (x > 9 && x < 100)
	{
		_putchar(' ');
		_putchar((x / 10) + '0');
		_putchar((x % 10) + '0');
	}
	else
	{
		if (flag != 0)
		{
			_putchar(' ');
			_putchar(' ');
		}
		_putchar(x + '0');
	}
}

/**
 * print_times_table - Print n times table starting with 0.
 * @n: Required. Number of times table.
 *
 */
void print_times_table(int n)
{
	int col = 0;
	int row, flag;

	if (n < 16 && n >= 0)
	{
		while (col <= n)
		{
			row = 0;
			while (row <= n)
			{
				flag = row;
				print(col * row, flag);
				if (row != 0 && row != n)
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
}
