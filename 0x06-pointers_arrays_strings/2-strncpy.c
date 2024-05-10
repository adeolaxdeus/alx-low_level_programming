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
	int index = 0;

	while (index < n && src[index] != '\0')
	{
		temp[index] = src[index];
		index++;
	}
	while (index < n)
	{
		temp[index] = '\0';
		index++;
	}
	return (dest);
}
