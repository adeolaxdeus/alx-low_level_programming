#include <stddef.h>
/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: string to be scanned
 * @accept: string containing characters to be match
 *
 * Return: a pointer to the byte in s that matches one of the bytes in accept,
 * or NULL if no such byte is found
 */
char *_strpbrk(char *s, char *accept)
{
	char *temp;

	while (*s)
	{
		temp = accept;
		while (*temp)
		{
			if (*temp == *s)
			{
				return (s);
			}
			temp++;
		}
		s++;
	}
	return (NULL);
}
