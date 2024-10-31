#include <stdio.h>
/**
 * int_index - Searches for an integer
 * @array: Pointer to an array of integer
 * @size: Size of array
 * @cmp: Pointer to function to perform the search on array
 *
 * Return: index of the 1st element for which cmp does not return
 * 0 otherwise -1 if no matches or size <= 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);
	while (i < size)
	{
		if (cmp(array[i]))
			return (i);
		i++;
	}
	return (-1);
}
