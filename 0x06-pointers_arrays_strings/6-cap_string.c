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
		if (*ptr == ' ' || *ptr == ',' || *ptr == '"' ||
				*ptr == ';' || *ptr == '!' || *ptr == '?' ||
				*ptr == '\n' || *ptr == '\t' || *ptr == '}' ||
				*ptr == '{' || *ptr == ')' || *ptr == '(')
		{
			if (*(ptr + 1) >= 'a' && *(ptr + 1) <= 'z')
			{
				*(ptr + 1) -= 32;
			}
		}
		ptr++;
	}
	return (str);
}
