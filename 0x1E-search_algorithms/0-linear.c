#include "search_algos.h"
/**
 * linear_search - searches for value in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index value is found at or -1 if nof found
 */
int linear_search(int *array, size_t size, int value)
{
	size_t index = 0;

	if (!array)
		return (-1);

	while (index <= (size - 1))
	{
		printf("Value checked array[%lu] = [%d]\n", index, array[index]);
		if (array[index] == value)
			return ((int)index);
		index++;
	}
	return (-1);
}
