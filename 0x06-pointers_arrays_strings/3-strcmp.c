/**
 * _strcmp - Compares two string
 * @s1: Pointer to first string.
 * @s2: Pointer to second string to be compare to previous.
 *
 * Return: 0 if both string are same otherwise difference btw s1
 *  and s2 lexicographically.
 *
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
		else
		{
			return (*s1 - *s2);
		}
	}
	return (0);
}
