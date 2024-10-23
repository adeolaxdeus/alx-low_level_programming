#include <stdlib.h>
/**
 * _calloc - Allocates memory for an array using malloc
 * @nmemb: Number of element to be in the array
 * @size: Size of each element bytes
 *
 * Return: Pointer to allocated memory on success otherwise NULL
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);
	i = 0;
	while (i < nmemb)
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
