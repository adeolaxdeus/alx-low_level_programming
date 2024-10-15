/**
 * _memset - Fills memory with a constant bytes.
 * @s: Pointer to buffer to be filled.
 * @b: Constant byte.
 * @n: Number of byte to fill in s.
 *
 * Return: Pointer to s.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;
	char *ptr = s;

	while (i < n)
	{
		ptr[i] = b;
		i++;
	}
	if (!ptr[i])
		ptr[i] = '\0';
	return (s);
}
