#include "main.h"
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
				if (result <= 9)
				{
					if (col != 0)
					{
						_putchar(' ');
						_putchar(' ');
					}
					_putchar(result + 0x30);
				}
				else if (result > 9 && result < 100)
				{
					_putchar(' ');
					_putchar((result / 10) + 0x30);
					_putchar((result % 10) + 0x30);
				}
				else
				{
					_putchar((result / 100) + '0');
					_putchar(((result / 10) % 10) + '0');
					_putchar((result % 10) + '0');
				}
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
