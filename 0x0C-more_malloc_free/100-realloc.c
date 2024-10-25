#include <stdlib.h>
#include <string.h>
/**
 * _realloc - Reallocates a memory block using malloc and frwe
 * @ptr: Pointer to the memory
 * @old_size: Size in bytes of the allocated space in ptr
 * @new_size: Size in bytes of the new memory block
 *
 * Return: Pointer to new memory block or ptr on success otherwise NULL
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (new_size < old_size)
		return (ptr);
	free(ptr);
	ptr = malloc(new_size);
	return (ptr);
}
