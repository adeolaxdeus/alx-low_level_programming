#include "main.h"
/**
 * _islower - Check if a character is lowercase alphabet or not
 * @c: Required. ASCII value of a character or an actual character.
 *
 * Return: 1 on success, 0 otherwise
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	return (0);
}
