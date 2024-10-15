/**
 * _memcpy - Copies memory area.
 * @dest: Pointer to buffer to copy n byte(s) to.
 * @src: Pointer to buffer to copy n byte(s) from.
 * @n: Number of byte(s) to copy
 *
 * Return: Pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *ptr = dest;
	unsigned int i = 0;

	while (i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	if (!ptr[i]) /* Check whether to null terminate ptr or not */
		ptr[i] = '\0';
	return (ptr);
}
