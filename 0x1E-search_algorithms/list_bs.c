#include "search_algos.h"

/**
 * print_sub_list - searches the list using binary search algo
 * @list: head of linked list
 * @low: first index of list or sublist to search
 * @high: last index of list or sublist to search
 */
void print_sub_list(listint_t *list, size_t low, size_t high)
{
	printf("\nSearching in sublist:\n");
	while (low <= high)
	{
		printf("\tindex -> %lu value -> %d", list->index, list->n);
		low++;
		if (low <= high)
			printf(",\n");
		list = list->next;
	}
	printf("\n");
}

/**
 * bs - searches the list using binary search algo
 * @list: head of linked list
 * @low: first index of list or sublist to search
 * @high: last index of list or sublist to search
 * @factor: size of struct + padding
 * @value: value to search for
 * Return: node if found else NULL
 */
listint_t *bs(listint_t *list, size_t low, size_t high, size_t factor,
	      int value)
{
	size_t mid = ((low + high) / 2), save;
	listint_t *current;

	if (low > high)
		return (NULL);
	save = (size_t) list;
	save = save - (factor * mid);
	current = (listint_t *) save;
	print_sub_list(list, low, high);
	printf("\tValue checked at index [%lu] = [%d]\n", mid, current->n);
	if (current->n == value)
		return (current);
	if (current->n > value)
		return (bs(list, low, (mid - 1), factor, value));
	else if (current->n < value)
		return (bs(list, (mid + 1), high, factor, value));

	return (NULL);
}
/**
 * bs_list - implementation of binary search with a linked list
 * @list: head of list
 * @size: no of nodes in the list
 * @value: value to search for
 * Return: pointer to found index or NULL
 */
listint_t *bs_list(listint_t *list, size_t size, int value)
{
	size_t low = 0, high = (size - 1), factor;

	if (!list || !size)
		return (NULL);
	factor = 32;
	if (list->next)
		factor = (size_t)((size_t)list - (size_t)(list->next));

	printf("========== Search start ==========\n");
	return (bs(list, low, high, factor, value));
}
