/**
 * _strchr - Locates a character in a string.
 * @s: Pointer to string to be scanned for a character.
 * @c: Character to look for in s
 *
 * Return: Pointer to memory area where c is found otherwise NULL
 */
char *_strchr(char *s, char c)
{
	while (*s)
	{
		if (*s == c)
			return (s);
		s++;
	}
	if (c == '\0')
		return (s);
	return ('\0');
}
