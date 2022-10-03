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
	size_t block = (size_t)sqrt(size), low, high = (size_t)sqrt(size), p, factor;
	listint_t *x;

	if (!list || !size)
		return (NULL);
	factor = 32;
	if (list->next)
		factor = (size_t)((size_t)list - (size_t)(list->next));
	low = 0;
	x = list - factor;
	while ((high < size) && (x->n <= value))
	{
		p = (size_t)list;
		p = p - (factor * high);
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
	p = p - (factor * (high - 1));
	x = (listint_t *)p;
	printf("Value found between indexes [%lu] and [%lu]\n", low, high);
	while (low <= high)
	{
		p = (size_t)list;
		p = p - (factor * low);
		x = (listint_t *)p;
		printf("Value checked at index [%lu] = [%d]\n", low, x->n);
		if (x->n == value)
			return (x);
		low++;
	}
	return (NULL);
}
