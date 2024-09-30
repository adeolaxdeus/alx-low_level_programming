#include "main.h"
/**
 * print - Print numbers in tens or unit.
 * @num: Required. An integer
 *
 */
void print(int num)
{
	if (num > 9)
		_putchar((num / 10) + '0');
	_putchar((num % 10) + '0');
}
/**
 * more_numbers - Print 0-14 ten times.
 *
 */
void more_numbers(void)
{
	char i = 0;
	int x;

	while (i < 10)
	{
		x = 0;
		while (x < 15)
		{
			print(x);
			x++;
		}
		_putchar('\n');
		i++;
	}
}
