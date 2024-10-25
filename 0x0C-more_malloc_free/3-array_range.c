#include <stdlib.h>
/**
 * array_range - Creates an array of integer of a particular range.
 * @min: A number, minimum starting range of array
 * @max: A number, maximum ending range of array
 *
 * Return: Pointer to newly created memory on success otherwise NULL
 */
int *array_range(int min, int max)
{
	int i = 0, temp;
	int *ptr;

	if (min > max)
		return (NULL);
	i = max - min + 1;
	ptr = malloc(sizeof(int) * i);
	if (ptr == NULL)
		return (NULL);
	temp = 0;
	while (temp < i)
	{
		ptr[temp] = min;
		temp++;
		min++;
	}
	return (ptr);
}
