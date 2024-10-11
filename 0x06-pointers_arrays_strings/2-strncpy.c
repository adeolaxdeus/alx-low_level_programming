/**
 * _strncpy - Copies a string.
 * @dest: Pointer to a destination string
 * @src: Pointer to string to be copied.
 * @n: Number of bytes to copy from src to dest.
 *
 * Description: If there is no null byte among first n bytes of src,
 * the string placed in dest will not be null terminated.
 *
 * Return: pointer to dest.
 */
char *_strncpy(char *dest, char *src, int n)
{
	char *ptr = dest;
	int i = 0;

	while (src[i] != '\0' && i < n)
	{
		ptr[i] = src[i];
		i++;
	}
	if (src[i] == '\0')
		ptr[i] = '\0';
	return (ptr);
}
