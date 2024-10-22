#include <stdlib.h>
/**
 * free_grid - Frees a 2d array created previously by alloc_grid function
 * @grid: Pointer to 2d array
 * @height: Number of rows in the 2d array
 *
 */
void free_grid(int **grid, int height)
{
	int row = 0;

	while (row < height)
	{
		free(grid[row]);
		grid[row] = NULL;
		row++;
	}
	free(grid);
	grid = NULL;
}
