#include "main.h"
/**
 * _strcat - Concatenate two strings
 * @dest: Pointer to destination string
 * @src: Pointer to string to be append to dest.
 *
 * Return: Pointer to dest.
 */
char *_strcat(char *dest, char *src)
{
	char *ptr = dest;

	while (*ptr)
	{
		ptr++;
	}
	while (*src)
	{
		*ptr = *src;
		ptr++;
		src++;
	}
	*ptr = '\0';
	return (dest);
}
