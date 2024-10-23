#include <stdlib.h>
/**
 * malloc_checked - Allocates memory using malloc
 * @b: Size of memory to be allocated
 *
 * Return: Pointer to allocated memory on success otherwise NULL
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
