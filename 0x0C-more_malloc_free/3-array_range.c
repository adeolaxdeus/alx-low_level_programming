#include <stddef.h>
#include <stdlib.h>
/**
 * array_range - creates an array of integers.
 * @min: smallest digit of the array
 * @max: maximum digit of the array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *ptr, *tempPtr, size, index = 0;

	if (min > max)
	{
		return (NULL);
	}
	size = (max - min) + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == NULL)
	{
		return (NULL);
	}
	tempPtr = ptr;
	while (index < size)
	{
		ptr[index] = min + index;
		index++;
	}
	return (tempPtr);
}
