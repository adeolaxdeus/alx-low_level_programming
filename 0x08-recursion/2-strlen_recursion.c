/**
 * _strlen_recursion - Returns the length of a string.
 * @s: Pointer to a string
 *
 * Return: Length of s
 *
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
	{
		return (0);
	}
	return (1 + _strlen_recursion(s + 1));
}
