/**
 * _strstr - Locates a substring
 * @haystack: Pointer to be scan for substring needdle.
 * @needle: Pointer to substring to be located
 *
 * Return: Pointer to first occurrence of needle in haystack
 *
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr;

	while (*needle)
	{
		ptr = haystack;
		while (*ptr)
		{
			if (*ptr == *needle)
				return (ptr);
			ptr++;
		}
		needle++;
	}
	return ('\0');
}
