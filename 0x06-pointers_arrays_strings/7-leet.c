/**
 * leet - Encodes a string into 1337.
 * @str: Pointer to string to be encode
 *
 * Return: Pointer to str.
 */
char *leet(char *str)
{
	char decode_str[] = "aeotlAEOTL";
	char encode_str[] = "4307143071";
	char *ptr = str;
	int i;

	while (*ptr)
	{
		i = 0;
		while (decode_str[i] != '\0')
		{
			if (*ptr == decode_str[i])
				*ptr = encode_str[i];
			i++;
		}
		ptr++;
	}
	return (str);
}
