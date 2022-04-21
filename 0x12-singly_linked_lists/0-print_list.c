#include "lists.h"
/**
 * print_list - prints the elements of a list
 * @h: head of list
 * Return: number of elements
 */
size_t print_list(const list_t *h)
{
	size_t count = 0;

	while (h != NULL)
	{
		if (h->str != NULL)
			printf("[%u] %s\n", h->len, h->str);
		else
			printf("[0] %s\n", "(nil)");
		h = h->next;
		count += 1;
	}
	return (count);
}
