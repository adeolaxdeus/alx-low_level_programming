#include "main.h"
void print(int num);
/**
 * print_number - Entry point
 * @n: integer to be print
 *
 */
void print_number(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar('-');
		print(n);
	}
	else if (n == 0)
	{
		_putchar(n + 0x30);
	}
	else if (n > 0)
	{
		print(n);
	}
}
/**
 * print - print number values
 * @num: digit to be print
 *
 */
void print(int num)
{
	if (num < 10)
	{
		_putchar(num + 0x30);
	}
	else if (num > 9 && num < 100)
	{
		_putchar((num / 10) + 0x30);
		_putchar((num % 10) + 0x30);
	}
	else if (num > 99 && num < 1000)
	{
		_putchar((num / 100) + 0x30);
		_putchar(((num / 10) % 10) + 0x30);
		_putchar((num % 10) + 0x30);
	}
	else
	{
		_putchar((num / 1000) + 0x30);
		_putchar(((num / 100) % 10) + 0x30);
		_putchar(((num / 10) % 10) + 0x30);
		_putchar((num % 10) + 0x30);
	}
}
