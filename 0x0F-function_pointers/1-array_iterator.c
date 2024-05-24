#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - executes a function given as a parameter on each element,
 * of an array.
 * @array: Elements of an array.
 * @size: Size of the array.
 * @action: Pointer to the function to be executed.
 *
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int index = 0;

	while (index < size)
	{
		action(array[index]);
		index++;
	}
}
