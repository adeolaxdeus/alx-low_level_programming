/**
 * _strcmp - compares two strings
 * @s1: first string
 * @s2: second string
 *
 * Return: 0 if string are same otherwise ascil differences between,
 * the two strings.
 */
int _strcmp(char *s1, char *s2)
{
	while (*s1 && *s2)
	{
		if (*s1 == *s2)
		{
			s1++;
			s2++;
		}
		else if (*s1 != *s2)
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
