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
	int **grid, index1 = 0, index2;

	if (width <= 0 || height <= 0)
	{
		return (NULL);
	}
	grid = malloc(height * sizeof(int *));
	if (grid == NULL)
	{
		return (NULL);
	}
	while (index1 < height)
	{
		grid[index1] = malloc(width * sizeof(int));
		if (grid[index1] == NULL)
		{
			while (index1--)
			{
				free(grid[index1]);
			}
			free(grid);
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
			grid[index1][index2] = 0;
			index2++;
		}
		index1++;
	}
	return (grid);
}
