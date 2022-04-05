#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
/**
 * free_grid - frees up memory initially allocated to create a 2 dim array
 * @grid: the already existing grid
 * @height: height of the grid
 *
 */
void free_grid(int **grid, int height __attribute__ ((unused)))
{
	if (grid != NULL)
	{
		free(*grid);
		free(grid);
	}
}
