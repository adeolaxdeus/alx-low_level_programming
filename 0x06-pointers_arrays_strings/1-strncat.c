/**
 * _strncat - concatenates two strings.
 * @dest: pointer to destination string
 * @src: pointer to pointer to string to be concatenated to dest
 * @n: number of bytes to copy
 *
 * Return: pointer to the resulting string dest
 */
char *_strncat(char *dest, char *src, int n)
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
	*temp = '\0';
	return (dest);
}
