#include <stddef.h>
#include <stdlib.h>
/**
 * _calloc - allocates memory for an array, using malloc.
 * @nmemb: number of arrays to be allocated
 * @size: size of each array
 *
 * Return: pointer to the allocated memory, or NULL if it fails.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int index = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
	{
		return (NULL);
	}
	ptr = malloc(nmemb * size);
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < nmemb)
	{
		ptr[index] = 0;
		index++;
	}
	return (ptr);
}
