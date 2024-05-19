#include <stddef.h>
#include <stdlib.h>
/**
 * checker - check if str1 and str2 are not null
 * @str1: first string
 * @str2: second string
 *
 */
void checker(char *str1, char *str2)
{
	if (str1 == NULL)
	{
		*str1 = ' ';
	}
	if (str2 == NULL)
		*str2 = ' ';
}
/**
 * str_concat - concatenates two string
 * @s1: first string to be concatenate
 * @s2: second string to e concatenate
 *
 * Return: pointer to a newly allocated memory which contains both s1 and s2,
 * or NULL on failure.
 */
char *str_concat(char *s1, char *s2)
{
	int len = 0;
	char *temp1;
	char *temp2, *ptr, *tempPtr;

	checker(s1, s2);
	temp1 = s1;
	temp2 = s2;
	while (*temp1)
	{
		len++;
		temp1++;
	}
	while (*temp2)
	{
		len++;
		temp2++;
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
		return (NULL);
	tempPtr = ptr;
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
	return (tempPtr);
}
