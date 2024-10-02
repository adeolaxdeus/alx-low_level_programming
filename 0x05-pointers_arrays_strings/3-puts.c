#include "main.h"
/**
 * _puts - Print a string to stdout followed by newline.
 * @str: Pointer to a string type value.
 *
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
