/**
 * _match - Find a word match in a string
 * @word: Word to be searched for in string
 * @str: String to be scan.
 *
 * Return: 1 if word match is found otherwise 0
 */
int _match(char *word, char *str)
{
	char *ptr = word;
	int i = 0, x = 0;

	while (*ptr) /* get length of word */
	{
		i++;
		ptr++;
	}
	while (*word && *str)
	{
		if (*word == *str)
			x++;
		else
			break;
		word++;
		str++;
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
	if (*needle == '\0')
		return (haystack);

	while (*haystack)
	{
		if (*haystack == *needle)
		{
			if (_match(needle, haystack))
				return (haystack);
		}
		haystack++;
	}
	return ('\0');
}
