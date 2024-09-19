#include "main.h"
/**
 * _islower - Check if a character is lowercase alphabet or not
 * @c: value passed, to be check.
 *
 * Return: 1 on success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
