#include "search_algos.h"
int recursive_search(int *array, size_t low, size_t high, int value);

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
 * get_first_index - searches for value using binary search algo
 * @array: array to print
 * @low: lower boundary of array
 * @high: higher boundary of array
 * @value: value to search for
 * Return: index found or -1
 */

int get_first_index(int *array, size_t low, size_t high, int value)
{
	size_t index = high - 1;

	if (index < low)
		return ((int) high);

	if (array[index] == value)
		return (recursive_search(array, low, high, value));
	else
		return ((int) high);
}

/**
 * recursive_search - searches for value using binary search algo
 * @array: array to print
 * @low: lower boundary of array
 * @high: higher boundary of array
 * @value: value to search for
 * Return: index found or -1
 */

int recursive_search(int *array, size_t low, size_t high, int value)
{
	size_t mid = (low + high) / 2;

	if (low > high)
		return (-1);
	print_array(array, low, high);

	if (array[mid] == value)
	{
		return (get_first_index(array, low, mid, value));
	}
	if (array[mid] > value)
		return (recursive_search(array, low, (high - mid), value));
	else
		return (recursive_search(array, (mid + 1), high, value));
	return (-1);
}

/**
 * advanced_binary - searches for value in array
 * @array: array to search
 * @size: size of array
 * @value: value to search for
 * Return: index value is found at or -1 if nof found
 */
int advanced_binary(int *array, size_t size, int value)
{
	size_t low = 0, high = (size - 1);

	if (!array || !size)
		return (-1);

	return (recursive_search(array, low, high, value));
}
