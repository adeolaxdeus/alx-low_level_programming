/**
 * leet -  encodes a string into 1337.
 * @str: string to be encode
 *
 * Return: pointer to a string
 */
char *leet(char *str)
{
	char text[] = "aeotlAEOTL";
	char code[] = "4307143071";
	char *temp = str;
	int index;

	while (*temp)
	{
		index = 0;
		while (text[index] != '\0')
		{
			if (*temp == text[index])
			{
				*temp = code[index];
				break;
			}
			index++;
		}
		temp++;
	}
	return (str);
}
