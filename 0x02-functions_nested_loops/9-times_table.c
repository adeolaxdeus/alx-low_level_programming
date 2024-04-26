#include "main.h"
/**
 * times_table - prints the 9 times table, starting with 0.
 *
 */
void times_table(void)
{
	int cols, result, rows = 0;

	while (rows < 10)
	{
		cols = 0;
		while (cols < 10)
		{
			result = cols * rows;
			if (result > 9)
			{
				_putchar((result / 10) + '0');
				_putchar((result % 10) + '0');
			}
			else if (result < 10)
			{
				if (cols != 0)
				{
					_putchar(' ');
				}
				_putchar(result + '0');
			}
			if (cols < 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			cols++;
		}
		_putchar('\n');
		rows++;
	}
	_putchar('\n');
}
