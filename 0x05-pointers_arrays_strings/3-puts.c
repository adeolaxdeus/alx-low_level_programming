#include "main.h"
/**
 * _puts - a function that prints a string, followed by a new line, to stdout
 * @str: pointer to a string
 *
 */
void _puts(char *str)
{
	while (*str)
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}