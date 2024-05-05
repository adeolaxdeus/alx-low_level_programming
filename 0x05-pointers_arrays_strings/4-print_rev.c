#include "main.h"
/**
 * print_rev - prints a string, in reverse, followed by a new line.
 * @s: pointer to a string
 *
 */
void print_rev(char *s)
{
	char *end = s;

	while (*end)
	{
		end++;
	}
	while (end >= s)
	{
		_putchar(*end);
		end--;
	}
	_putchar('\n');
}
