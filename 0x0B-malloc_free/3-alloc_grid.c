#include <stdlib.h>
/**
 * alloc_grid - Returns a pointer to a 2d array of integers
 * @width: Size of 2d array rows
 * @height: Size of 2d array columns
 *
 * Return: Double pointer to 2d array on success otherwise NULL
 */
int **alloc_grid(int width, int height)
{
	int row, col;
	int **array;

	if (width <= 0 || height <= 0)
		return (NULL);
	array = malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	row = 0;
	while (row < height)
	{
		array[row] = malloc(sizeof(int) * width);
		if (array[row] == NULL)
		{
			col = 0;
			while (col < row)
			{
				free(array[col]);
				col++;
			}
			free(array);
			return (NULL);
		}
		row++;
	}
	row = 0;
	while (row < height)
	{
		col = 0;
		while (col < width)
		{
			array[row][col] = 0;
			col++;
		}
		row++;
	}
	return (array);
}
