#include "main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14, followed
 * by a new line.
 *
 */
void more_numbers(void)
{
	int count = 0;
	int	num;

	while (count < 10)
	{
		num = 0;
		while (num < 15)
		{
			_putchar(num + 0x30);
			num++;
		}
		_putchar('\n');
		count++;
	}
	_putchar('\n');
}
