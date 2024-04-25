#include "main.h"
/**
 * print_last_digit - prints the last digit of a number.
 * @num: a number
 *
 * Return: the last digit of num
 */
int print_last_digit(int num)
{
	int lastDigit;
	char lastDigitChar;

	if (num < 0)
	{
		num *= -1;
	}
	lastDigit = num % 10;
	lastDigitChar = lastDigit + '0';
	_putchar(lastDigitChar);
	return (lastDigit);
}
