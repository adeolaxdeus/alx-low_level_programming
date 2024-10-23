#include <stdlib.h>
#include <string.h>
/**
 * string_nconcat - Concatenates two strings.
 * @s1: Pointer to first string
 * @s2: Pointer to second string
 * @n: Number of bytes from s2 to concatenate to s1
 * Return: Pointer To newly allocated memory containing s1 followed by
 * n bytes of s2 on success otherwise NULL
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *ptr, *temp;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	i = strlen(s1);
	i += n;
	ptr = malloc(sizeof(char) * i + 1);
	if (ptr == NULL)
		return (NULL);
	temp = ptr;
	while (*s1)
	{
		*ptr = *s1;
		ptr++;
		s1++;
	}
	while (*s2 && n > 0)
	{
		*ptr = *s2;
		ptr++;
		s2++;
		n--;
	}
	*ptr = '\0';
	return (temp);
}
