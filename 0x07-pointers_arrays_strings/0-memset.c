/**
 * _memset - fills memory with a constant byte.
 * @s: memory area
 * @b: constant byte
 * @n: number of bytes to filled
 *
 * Return: pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index = 0;

	while (index < n)
	{
		s[index] = b;
		index++;
	}
	s[index] = '\0';
	return (s);
}
