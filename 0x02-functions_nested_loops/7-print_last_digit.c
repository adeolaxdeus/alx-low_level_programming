#include "main.h"
/**
 * print_last_digit - Print the last digit of a number
 * @x: Required. A number.
 *
 * Return: Value of the last digit.
 */
int print_last_digit(int x)
{
	int last_digit;

	last_digit = x % 10;
	if (last_digit < 0)
		last_digit *= -1;
	_putchar(last_digit + '0');
	return (last_digit);
}
