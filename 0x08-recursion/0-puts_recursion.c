#include "main.h"
/**
 * _puts_recursion - Print a string follow by newline
 * @s: Pointer to a string.
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(++s);
}
