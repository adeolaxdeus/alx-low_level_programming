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
	if (x % 2 == 0)
		x /= 2;
	else
		x = (x + 1) / 2;
	while (str[x] != 0)
	{
		_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
