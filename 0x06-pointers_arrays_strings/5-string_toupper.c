/**
 * string_toupper - changes all lowercase letters of a string to uppercase.
 * @c: pointer to string
 *
 * Return: uppercase character
 */
char *string_toupper(char *c)
{
	char *temp = c;

	while (*c)
	{
		if (*c >= 'a' && *c <= 'z')
		{
			*c = ((*c - 'a') + 'A');
		}
		c++;
	}
	return (temp);
}
