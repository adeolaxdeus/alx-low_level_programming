#include "main.h"
/**
 * puts_half - Print half of a string
 * @str: Pointer to a string.
 *
 */
void puts_half(char *str)
{
	char *ptr = str;
	int x = 0;

	while (*ptr)
	{
		x++;
		ptr++;
	}
	x /= 2; /* get half of string */
	while (str[x] != 0)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
