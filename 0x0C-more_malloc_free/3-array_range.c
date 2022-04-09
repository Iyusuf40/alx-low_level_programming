#include <stdlib.h>
#include <stdio.h>
/**
 * array_range- creates an array with range from min to max
 * @min: least member of array
 * @max: highest member of array
 * Return: pointer to array
 *
 */
int *array_range(int min, int max)
{
	int *ptr, i = 0, size;

	if (min > max)
		return (0);

	size = max - min + 1;
	ptr = malloc(size * sizeof(int));
	if (ptr == 0)
		return (0);
	while (min <= max)
	{
		ptr[i] = min;
		i++;
		min++;
	}

	return (ptr);
}
