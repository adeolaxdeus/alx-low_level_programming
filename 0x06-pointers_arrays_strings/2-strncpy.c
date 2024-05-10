/**
 * _strncpy -  copies a string.
 * @dest: pointer to a buffer
 * @src: pointer to string to be copied to dest
 * @n: number of bytes to be  copied.
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *temp = dest;

	while (*temp)
	{
		temp++;
	}
	while (*src && n > 0)
	{
		*temp = *src;
		temp++;
		src++;
		n--;
	}
	if (n != 0)
	{
		while (n > 0)
		{
			*dest = '\0';
			n--;
		}
	}
	*temp = '\0';
	return (dest);
}
