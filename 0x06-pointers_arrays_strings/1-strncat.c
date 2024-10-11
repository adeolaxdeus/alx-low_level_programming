/**
 * _strncat - Concatenates two strings, using n bytes at most.
 * @dest: Pointer to destination string.
i * @src: Pointer to string to be append
 * @n: Number of bytes to use at most.
 *
 * Return: Pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	char *temp_ptr = dest;
	int x = 0;

	while (*temp_ptr)
	{
		temp_ptr++;
	}
	while (src[x] != '\0' && x < n)
	{
		*temp_ptr = src[x];
		x++;
		temp_ptr++;
	}
	temp_ptr = '\0';
	return (dest);
}
