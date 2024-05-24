#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - Searches for an integer
 * @array: Numbers to be scanned through.
 * @size: Size of array.
 * @cmp: Pointers to functions to be executed.
 *
 * Return: Index of the first element for which the cmp function,
 * does not return 0 or if no element matches return -1.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int result, index = 0;

	if (size <= 0)
	{
		return (-1);
	}
	if (array != NULL)
	{
		while (index < size)
		{
			result = cmp(array[index]);
			if (result != 0)
			{
				return (index);
			}
			index++;
		}
	}
	return (-1);
}
