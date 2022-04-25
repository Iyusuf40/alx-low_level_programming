#include "lists.h"
/**
 * listint_len - computes number of links in a list
 * @h: head of list
 * Return: number of links
 */
size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);
	while (h)
	{
		h = (*h).next;
		count++;
	}
	return (count);
}
