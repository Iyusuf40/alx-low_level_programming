#include "lists.h"
/**
 * print_listint - prints the int field of the list
 * @h: head of list
 * Return: number of links
 */
size_t print_listint(const listint_t *h)
{
	size_t count = 0;

	if (h == NULL)
		return (1);
	while (h)
	{
		printf("%d\n", (*h).n);
		h = (*h).next;
		count++;
	}
	return (count);
}