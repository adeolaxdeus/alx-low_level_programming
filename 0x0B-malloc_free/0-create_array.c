#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - creates an array of chars, and initializes it with,
 * a specific char.
 * @size: size of array
 * @c: character to initialized the array with
 *
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int index = 0;

	if (size == 0)
	{
		return (NULL);
	}
	ptr = malloc((size + 1) * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	while (index < size)
	{
		ptr[index] = c;
		index++;
	}
	ptr[index] = '\0';
	return (ptr);
}
