/**
 * rot13 - encodes a string using rot13.
 * @str: string to be encode
 *
 * Return: encoded string
 */
char *rot13(char *str)
{
	int i;
	char *temp = str;
	char alpha[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char inverse[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	while (*temp)
	{
		i = 0;
		while (alpha[i] != '\0')
		{
			if (*temp == alpha[i])
			{
				*temp = inverse[i];
				break;
			}
			i++;
		}
		temp++;
	}
	*temp = '\0';
	return (str);
}
