/**
 * _strcmp - Compares two string
 * @s1: Pointer to first string.
 * @s2: Pointer to second string to be compare to previous.
 *
 * Return: 0 if both string are same or 1 if if first s1 is > s2
 * lexicographically, -1 otherwise.
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
		else if (*s1 > *s2)
		{
			return (1);
		}
		else
		{
			return (-1);
		}
	}
	if (*s1)
		return (1);
	else if (*s2)
		return (-1);
	return (0);
}
