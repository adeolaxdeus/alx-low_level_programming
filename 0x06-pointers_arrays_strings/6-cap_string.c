/**
 * cap_string - capitalizes all words of a string.
 * @str: pointer to a string
 *
 * Return: pointer to str
 */
char *cap_string(char *str)
{
	char *c = str;

	while (*c)
	{
		if (*c == ',' || *c == ';' || *c == '.' || *c == '!'
			|| *c == '?' || *c == ':' || *c == '(' || *c == ')'
			|| *c == '{' || *c == '}' || *c == '"')
		{
			if (*(c + 1) >= 'a' && *(c + 1) <= 'z')
			{
				*(c + 1) = ((*(c + 1) - 'a') + 'A');
			}
		}
		c++;
	}
	return (str);
}
