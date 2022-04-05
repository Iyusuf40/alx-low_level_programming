#include <stdlib.h>

/**
 * alloc_grid - creates a space in memory that accomodates a 2 d-mensional
 * array and initiallizes each cell to 0
 *
 * @width: number of columns of the array
 * @height: number of rows of the array
 *
 * Return: the address of the array
 */
int **alloc_grid(int width, int height)
{
	int size = width * height, int **grid, int h = 0, int w = 0;

	if (width < 1 || height < 1)
		return (0);

	grid = malloc(size * sizeof(int));

	if (grid == 0)
		return (0);

	while (h < height)
	{
		while (w < width)
		{
			grid[h][w] = 0;
			w++;
		}
		h++;
	}

	return (grid);
}
