#include "lists.h"
/**
 * get_nodeint_at_index - returns node at index index
 * @head: head of list
 * @index: index to return
 * Return: node at index
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *node = NULL;
	unsigned int count = 0;

	if (!head)
		return (NULL);

	node = head;
	while (node)
	{
		if (count == index)
			return (node);
		node = node->next;
		count++;
	}

	return (NULL);
}
