#include "lists.h"
/**
 * get_dnodeint_at_index - gets a node at index
 * @head: head of list
 * @index: index to return
 *
 * Return: node at index
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int count = 0;

	while (head)
	{
		if (index == count)
			return (head);
		count++;
		head = head->next;
	}
	return (NULL);
}
