#include <stdlib.h>
#include <string.h>
/**
 * _strlen - Get the length of strings and add newline count for each string.
 * @ptr_ptr: Double pointer to array of strings
 * @n: Number of string in ptr_ptr
 *
 *
 * Return: Length of strings
 */
int _strlen(char **ptr_ptr, int n)
{
	unsigned int len = 0;
	int i = 0;

	while (i < n)
	{
		len += strlen(ptr_ptr[i]);
		len += 1; /* Add newline character count for each argument  */
		i++;
	}
	return (len);
}
/**
 * _strcat - Concatenates two strings
 * @dest: Pointer to destination buffer
 * @src: Pointer to string to be add to dest
 *
 * Return: Pointer to dest on success
 */
char *_strcat(char *dest, char *src)
{
	while (*dest)
	{
		dest++;
	}
	while (*src)
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\n';
	*(dest + 1) = '\0';
	return (dest);
}

/**
 * argstostr - Concatenates all arguments of your program,
 * each argument is separated by newline character.
 *
 * @ac: Number of arguments passed
 * @av: Pointer to array of arguments passed
 *
 * Return: Pointer to new strings on success otherwise NULL
 */
char *argstostr(int ac, char **av)
{
	int str_len;
	char *ptr;
	int i = 0;

	if (ac == 0 || av == NULL)
		return (NULL);
	str_len = (_strlen(av, ac));
	ptr = malloc(sizeof(char) * (str_len + 1));
	if (ptr == NULL)
		return (NULL);
	ptr[0] = '\0';
	while (i < ac)
	{
		_strcat(ptr, av[i]);
		i++;
	}
	return (ptr);
}
