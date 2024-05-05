/**
 * _strlen - a function that returns the length of a string.
 * @s: pointer to a string
 *
 * Return: Length of s.
 */
int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}
	return (len);
}
