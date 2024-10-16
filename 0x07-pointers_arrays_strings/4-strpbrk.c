/**
 * _match - Check for a particular character in a string.
 * @c: Character to look for.
 * @str: Pointer to a string
 *
 * Return: 1 if there is a match else 0.
 */
int _match(char c, char *str)
{
	while (*str)
	{
		if (*str == c)
			return (1);
		str++;
	}
	return (0);
}
/**
 * _strpbrk - Searches a string for any set of bytes.
 * @s: String to be scan.
 * @accept: String to be search for in s
 *
 *
 * Return: Pointer to first occurrence of accept in s otherwise null
 */
char *_strpbrk(char *s, char *accept)
{
	char *ptr;

	while (*s)
	{
		ptr = accept;
		if (_match(*s, ptr))
			return (s);
		s++;
	}
	return ('\0');
}
