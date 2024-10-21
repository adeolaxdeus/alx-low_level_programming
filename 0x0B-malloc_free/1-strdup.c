#include <string.h>
#include <stdlib.h>
/**
 * _strdup - Returns a pointer to a new string which is a duplicate of str.
 * @str: Pointer to a string
 *
 * Return: Pointer to a new string on success otherwise NULL
 */
char *_strdup(char *str)
{
	char *ptr;
	char *temp;
	unsigned int size;

	if (str == NULL)
		return (NULL);
	size = strlen(str);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (*str)
	{
		*ptr = *str;
		str++;
		ptr++;
	}
	*ptr = '\0';
	return (temp);
}
