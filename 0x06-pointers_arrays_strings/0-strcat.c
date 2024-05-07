/**
 * _strcat - concatenates two strings.
 * @dest: pointer to a buffer
 * @src: pointer to a stringto be concatenate
 *
 * Return: pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	char *temp = dest;

	while (*temp)
	{
		temp++;
	}
	while (*src)
	{
		*temp = *src;
		temp++;
		src++;
	}
	*temp = '\0';
	return (dest);
}
