#include "main.h"
/**
 * _strlen - Return the length of a string
 * @s: Pointer to a string value.
 *
 *
 * Return: Length of string
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
