#include <stddef.h>
#include <stdlib.h>
/**
 * alloc_grid -  returns a pointer to a 2 dimensional array of integers.
 * @width: width of array.
 * @height: height of array.
 *
 * Return: pointer to a 2d array, or NULL if width or height is 0 or < 1.
 *
 */
int **alloc_grid(int width, int height)
{
	int **col, index1 = 0, index2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	col = malloc(height * sizeof(int));
	if (col == NULL)
	{
		return (NULL);
	}
	while (index1 < height)
	{
		col[index1] = malloc(width * sizeof(int));
		if (col[index1] == NULL)
		{
			return (NULL);
		}
		index1++;
	}
	index1 = 0;
	while (index1 < height)
	{
		index2 = 0;
		while (index2 < width)
		{
			col[index1][index2] = 0;
			index2++;
		}
		index1++;
	}
	return (col);
}
