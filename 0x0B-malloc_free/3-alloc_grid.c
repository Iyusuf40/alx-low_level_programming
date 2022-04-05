#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
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
	int i = 0, j = 0, h = 0, k = width, l = 0;
	int **grid, *gri;

	if (width < 1 || height < 1)
		return (NULL);

	gri = malloc(width * height * sizeof(int));

	if (gri == NULL)
	{
		free(gri)
		return (NULL);
	}

	grid = malloc(height * sizeof(gri));

	if (grid == NULL)
	{
		free(grid);
		return (NULL);
	}

	while (h < height)
	{
		grid[h] = gri + l;
		h++;
		l += k;
	}

	while (i < height)
	{
		j = 0;
		while (j < width)
		{
			grid[i][j] = 0;
			j++;
		}
		i++;
	}
	return (grid);
}
