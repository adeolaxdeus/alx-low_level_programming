#include <stddef.h>
#include <stdlib.h>
/**
 * free_grid - frees a 2 dimensional grid previously created by your,
 * alloc_grid function.
 * @grid: pointer to a dynamically allocated memory
 * @height: size of memory allocated
 *
 */
void free_grid(int **grid, int height)
{
	int i = 0;

	while (i < height)
	{
		free(grid[i]);
		i++;
	}
	free(grid);
}
