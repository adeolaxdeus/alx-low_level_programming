/**
 * string_toupper - Changes all lowercase to uppercase
 * @str: Pointer to a string.
 *
 * Return: Pointer to str.
 */
char *string_toupper(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (*ptr >= 'a' && *ptr <= 'z')
			*ptr -= 32; /* Convert to uppercase via ASCII value manipulation */
		ptr++;
	}
	return (str);
}
