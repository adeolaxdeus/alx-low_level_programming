#include <stdlib.h>
/**
 * array_iterator - Executes a function given as parameter on
 * each element of an array
 * @array: Pointer to an array of integers
 * @size: Size of array
 * @action: Pointer to function to perform action on the elements of array.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;
	i = 0;
	while (i < size)
	{
		action(array[i]);
		i++;
	}
}
