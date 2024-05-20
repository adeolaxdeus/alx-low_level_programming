#include <stddef.h>
#include <stdlib.h>
/**
 * checkForNull - check if a pointer to a memory is null
 * @str1: pointer to memory 1
 * @str2: pointer to memory 2
 */
void checkForNull(char *str1, char *str2)
{
	if (str1 == NULL)
	{
		*str1 = ' ';
	}
	if (str2 == NULL)
	{
		*str2 = ' ';
	}
}
/**
 * string_nconcat - concatenates two strings.
 * @s1: first string
 * @s2: second string
 * @n: number of bytes to be copy from s2.
 *
 * Return: pointer to a newly allocated space in memory which contains s1
 * folloed by first n bytes of s2 or NULL if funtion fails
 *
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int len1 = 0, len2 = 0, index1 = 0, index2 = 0;
	char *ptr;

	checkForNull(s1, s2);
	while (s1[len1] != '\0')
	{
		len1++;
	}
	while (s2[len2] != '\0')
	{
		len2++;
	}
	if (n >= len2)
	{
		n = len2;
	}
	ptr = malloc((len1 + n) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index1 < len1)
	{
		ptr[index1] = s1[index1];
		index1++;
	}
	while (index2 < n)
	{
		ptr[index1] = s2[index2];
		index1++;
		index2++;
	}
	return (ptr);
}
