/**
 * _match - Find a character match in a string.
 * @c: Character to look for.
 * @str: String to be scan.
 *
 * Return: 1 if c is found otherwise 0
 */
int _match(char c, char *str)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}
/**
 * _strspn - Get the length of a prefix substring
 * @s: Pointer to string to be scan
 * @accept: Pointer to string to be searched for in s
 *
 * Return: Number of bytes in accept found in s
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i = 0;
	char *ptr;

	while (*s)
	{
		ptr = accept;
		if (_match(*s, ptr))
			i++;
		else
			break;
		s++;
	}
	return (i);
}
