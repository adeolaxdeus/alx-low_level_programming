#include "main.h"
/**
 * _isupper - Check if a character is uppercase letter.
 * @c: Required. An alphabetic character.
 *
 * Return: 1 if c is uppercase or 0 otherwise.
 */
int _isupper(char c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	return (0);
}
