#include "main.h"
/**
 * puts_half -  prints half of a string, followed by a new line.
 * @str: pointer to a string
 *
 */
void puts_half(char *str)
{
	char *temp = str;
	int length = 0;
	int n;

	while (*temp)
	{
		temp++;
		length++;
	}
	n = length / 2;
	while (str[n] != '\0')
	{
		_putchar(str[n]);
		n++;
	}
	_putchar('\n');
}
