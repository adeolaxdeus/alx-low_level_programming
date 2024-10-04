#include "main.h"
/**
 * puts2 - Print every other character of a string, starting with the first.
 * @str: Pointer to a string.
 *
 *
 */
void puts2(char *str)
{
	int x = 0;

	while (str[x] != '\0')
	{
		if (x == 0 || x % 2 == 0)
			_putchar(str[x]);
		x++;
	}
	_putchar('\n');
}
