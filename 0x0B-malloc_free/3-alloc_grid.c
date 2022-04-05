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
	int i, j, h, l;
	int **grid, *ptr;

	if (width < 1 || height < 1)
		return (NULL);

	grid = malloc(height * sizeof(ptr));
	if (grid == NULL)
	{
		return (NULL);
	}

	ptr = malloc(width * height * sizeof(int));
	if (ptr == NULL)
	{
		free(grid);
		return (NULL);
	}
	i = h = l = 0;
	while (h < height)
	{
		grid[h] = ptr + l;
		h++;
		l += width;
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
