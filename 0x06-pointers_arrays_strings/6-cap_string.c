/**
 * is_sep - Check if a character is a word separator.
 * @c: Pointer to a character.
 *
 * Return: 1 if true otherwise 0.
 */
int is_sep(char *c)
{
	char separator[] = {' ', '\n', '\t', ',', '"', '.', ';',
		'!', '?', '{', '}', '(', ')'};
	char *sep_ptr = separator;

	while (*sep_ptr)
	{
		if (*c == *sep_ptr)
			return (1);
		sep_ptr++;
	}
	return (0);
}
/**
 * cap_string - Capitalizes a string.
 * @str: Pointer to a string.
 *
 * Return: Pointer to str.
 */
char *cap_string(char *str)
{
	char *ptr = str;

	while (*ptr)
	{
		if (is_sep(ptr) && (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z'))
		{
			ptr++;
			*ptr -= 32;
		}
		ptr++;
	}
	return (str);
}
