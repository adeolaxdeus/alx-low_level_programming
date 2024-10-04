#include "main.h"
/**
 * _strcpy - Copies the string pointed to by src to the buffer dest.
 * @dest: Pointer to where string will be copied to.
 * @src: Pointer to where string will be copied from.
 *
 * Return: The pointer to dest.
 */
char *_strcpy(char *dest, char *src)
{
	char *temp = dest;

	while (*src)
	{
		*temp = *src;
		src++;
		temp++;
	}
	*temp = '\0';
	return (dest);
}
