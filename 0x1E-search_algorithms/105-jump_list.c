#include "search_algos.h"

/**
 * jump_list - implementation of jump search with a linked list
 * @list: head of list
 * @size: no of nodes in the list
 * @value: value to search for
 * Return: pointer to found index or NULL
 */
listint_t *jump_list(listint_t *list, size_t size, int value)
{
	size_t block = (size_t)sqrt(size), low, high, p;
	listint_t *x;

	if (!list || !size)
		return (NULL);

	high = block;
	low = 0;
	x = list - 32;
	while ((high < size) && (x->n <= value))
	{
		p = (size_t)list;
		p = p - (32 * high);
		x = (listint_t *)p;
		printf("Value checked at index [%lu] = [%d]\n", high, x->n);
		if (x->n >= value || high == (size - 1))
			break;
		low = high;
		high += block;
		if (high >= size)
			high = size - 1;
	}
	if (high >= size)
		high = size - 1;
	p = (size_t)list;
	p = p - (32 * (high - 1));
	x = (listint_t *)p;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);

	while (low <= high)
	{
		p = (size_t)list;
		p = p - (32 * low);
		x = (listint_t *)p;
		printf("Value checked at index [%lu] = [%d]\n", low, x->n);
		if (x->n == value)
			return (x);
		low++;
	}
	return (NULL);
}
