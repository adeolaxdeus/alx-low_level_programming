/**
 * _memcpy - copies memory area.
 * @dest: pointer to buffer
 * @src: pointer to memory area to be copied
 * @n: number of bytes to fill memory
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		dest[index] = src[index];
		index++;
	}
	dest[index] = '\0';
	return (dest);
}
