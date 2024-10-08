#include "main.h"
/**
 * print_sign - Print the sign of a number.
 * @n: Required. a number.
 *
 * Return: 1 if positive, 0 othwrwise.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	_putchar('-');
	return (-1);
}
