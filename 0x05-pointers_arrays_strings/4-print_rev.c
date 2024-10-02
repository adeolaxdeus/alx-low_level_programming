#include "main.h"
/**
 * print_rev - Print a string in reverse followed by newline.
 * @s: Pointer to a string.
 *
 *
 */
void print_rev(char *s)
{
	while (*s) /* loops string to the end */
	{
		s++;
	}
	s--; /* Shift s to last character instead of EOF. */

	while (*s) /* loops string from the end to beginning */
	{
		_putchar(*s);
		s--;
	}
	_putchar('\n');
}
