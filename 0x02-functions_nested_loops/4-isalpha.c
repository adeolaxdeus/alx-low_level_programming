#include "main.h"
/**
 * _isalpha - Check if a character is an alphabet or not.
 * @c: Required. ASCII value of a character or an actual character.
 *
 * Return: 1 if c is a letter  or 0 otherwise.
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
		return (1);
	return (0);
}
