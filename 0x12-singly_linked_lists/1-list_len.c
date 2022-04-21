#include "lists.h"

/**
 * list_len - returns the number of elements in a singly linked list
 * @h: head of list
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	size_t count = 0;
	const list_t *current = h;

	while (current != NULL)
	{
		count += 1;
		current = current->next;
	}

	return (count);
}
