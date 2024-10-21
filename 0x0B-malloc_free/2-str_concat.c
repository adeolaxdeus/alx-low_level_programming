#include <string.h>
#include <stdlib.h>
/**
 * str_concat - Concatenates two string
 * @s1: Pointer to a string
 * @s2: Pointer to string to be concatenate to s1
 *
 * Return: Pointer to a newly allocated memory that contains the concatenated
 * string(s1, s2) on success otherwise NULL.
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr, *temp;
	unsigned int size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	size = strlen(s1);
	size += strlen(s2);
	ptr = malloc(sizeof(char) * (size + 1));
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2)
	{
		*ptr = *s2;
		ptr++;
		s2++;
	}
	*ptr = '\0';
	return (temp);
}
