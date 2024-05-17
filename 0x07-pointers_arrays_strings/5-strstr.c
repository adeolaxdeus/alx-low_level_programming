#include <stddef.h>
/**
 * _strstr - locates a substring.
 * @haystack: this is the main string to be examined.
 * @needle: this is the substring to be searched in main string.
 *
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *temp;

	if (*needle == '\0')
		return (haystack);
	while (*haystack)
	{
		temp = needle;
		while (*temp)
		{
			if (*temp == *haystack && *(temp + 1) == *(haystack + 1))
			{
				return (haystack);
			}
			temp++;
		}
		needle++;
	}
	return (NULL);
}
