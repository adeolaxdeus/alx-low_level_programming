#include "main.h"
/**
 * puts2 -  prints every other character of a string, starting with the
 * first character, followed by a new line.
 * @str: pointer to a string
 *
 */
void puts2(char *str)
{
	int index = 0;

	while (*str)
	{
		if (index == 0 || index % 2 == 0)
		{
			_putchar(*str);
		}
		str++;
		index++;
	}
	_putchar('\n');
}
