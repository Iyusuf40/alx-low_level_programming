/**
 * int_index - returns the index at which cmp evaluates to non-zero
 * @array: array to check
 * @size: size of array
 * @cmp: function to evaluate over elements of array
 *
 * Return: index at which cmp evaluates to 1 / TRUE
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size <= 0 || array == 0)
		return (-1);

	while (cmp(array[i]) != 1 && i < size)
		i++;
	if (i == size)
		return (-1);
	return (i);
}
