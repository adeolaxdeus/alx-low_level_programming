#include <stddef.h>
#include <stdlib.h>
/**
 * _strdup - returns a pointer to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string to be copy to a new destination.
 *
 * Return: pointer to the duplicated string. It returns NULL if,
 * insufficient memory was available
 */
char *_strdup(char *str)
{
	char *temp = str;
	char *ptr;
	int len = 0;
	int index = 0;

	if (str == NULL)
	{
		return (NULL);
	}
	while (*temp)
	{
		len++;
		temp++;
	}
	ptr = malloc((len + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < len)
	{
		ptr[index] = str[index];
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
