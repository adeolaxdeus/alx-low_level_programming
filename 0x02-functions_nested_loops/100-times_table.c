#include "main.h"
void print_number(int num);
/**
 * print_times_table - prints the n times table, starting with 0.
 * @n: the times table to print
 *
 */
void print_times_table(int n)
{
	int row = 0, col, result;

	if (n <= 15 && n > 0)
	{
		while (row <= n)
		{
			col = 0;
			while (col <= n)
			{
				result = col * row;
				print_number(result);
				if (col != n)
				{
					_putchar(',');
					_putchar(' ');
				}
				if (col == n)
				{
					_putchar('\n');
				}
				col++;
			}
			row++;
		}
	}
}
/**
 * print_number - prints a number with proper alignment.
 * @num: the number to print
 */
void print_number(int num)
{
	if (num < 10)
	{
		_putchar(' ');
		_putchar(' ');
		_putchar(num + '0');
	}
	else if (num < 100)
	{
		_putchar(' ');
		_putchar(num / 10 + '0');
		_putchar(num % 10 + '0');
	}
	else
	{
		_putchar(num / 100 + '0');
		_putchar((num / 10) % 10 + '0');
		_putchar(num % 10 + '0');
	}
}
