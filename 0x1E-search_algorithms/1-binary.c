#include "search_algos.h"

/**
 * print_array - prints an array of integers
 * @arr: array to print
 * @low: lower boundary of array
 * @high: higher boundary of array
 */
void print_array(int arr[], size_t low, size_t high)
{
	size_t index = low;

	if (arr)
	{
		printf("Searching in array: ");
		while (index <= high)
		{
			printf("%d", arr[index]);
			if (index != high)
				printf(", ");
			index++;
		}
		printf("\n");
	}
}

/**
 * binary_search - searches for value in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index value is found at or -1 if nof found
 */
int binary_search(int *array, size_t size, int value)
{
	size_t mid, low = 0, high = (size - 1);

	if (!array || !size)
		return (-1);

	while (high >= low)
	{
		print_array(array, low, high);
		mid = (low + high) / 2;
		if (array[mid] == value)
			return ((int)mid);
		if (array[mid] > value)
			high = mid - 1;
		else
			low = mid + 1;
	}
	return (-1);
}
