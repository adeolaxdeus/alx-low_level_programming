/**
 * _match - Find a word match in a string
 * word: Word to be searched for in string
 * str: String to be scan.
 *
 * Return: 1 if word match is found otherwise 0
 */
int _match(char *word, char *str)
{
	char *ptr = word;
	char *s = str;
	char *temp = word;
	int i = 0, x = 0;

	while (*ptr) /* get length of word */
	{
		i++;
		ptr++;
	}
	while (*temp && *s)
	{
		if (*temp == *s)
			x++;
		temp++;
		s++;
	}
	if (x == i)
		return (1);
	return (0);
}
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

	if (*needle == '\0')
		return (haystack);

	while (*needle)
	{
		ptr = haystack;
		while (*ptr)
		{
			if (*ptr == *needle)
			{
				if (_match(needle, ptr))
					return (ptr);
			}
			ptr++;
		}
		needle++;
	}
	return ('\0');
}
