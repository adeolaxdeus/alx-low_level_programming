/**
 * rot13 - Encodes a string using rot13.
 * @str: Pointer to string to be encode
 *
 * Return: Pointer to str.
 *
 */
char *rot13(char *str)
{
	char decode_str[] = "abcdefghijklmnopqrstuvwxyz";
	char encode_str[] = "nopqrstuvwxyzabcdefghijklm";
	char *ptr = str;
	int i;

	while (*str)
	{
		i = 0;
		while (decode_str[i] != '\0')
		{
			if (*str == decode_str[i])
			{
				*str = encode_str[i];
				break;
			}
			i++;
		}
		str++;
	}
	return (ptr);
}
