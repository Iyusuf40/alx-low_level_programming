#include <stdlib.h>
#include <stdio.h>
/**
 * array_iterator - loops over an array and operate action on each element
 * @array: array to loop over
 * @size: siz of array
 * @action: function to operate on each element
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i = 0;

	for (i = 0; i < size; i++)
		action(array[i]);
}
