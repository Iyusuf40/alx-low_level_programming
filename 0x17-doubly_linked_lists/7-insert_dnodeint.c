#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts a ne node at index idx
 * @h: head of list
 * @idx: index
 * @n: data field
 *
 * Return: the new node
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new_node, *save;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);

	new_node->n = n;
	if (!*h)
	{
		if (idx == 0)
		{
			new_node->prev = NULL;
			new_node->next = NULL;
			*h = new_node;
			return (new_node);
		}
		return (NULL);
	}
	save = *h;
	while (save)
	{
		if (count == idx)
		{
			if (idx != 0)
			{
				new_node->next = (save->prev)->next;
				(save->prev)->next = new_node;
				new_node->prev = save->prev;
				save->prev = new_node;
				return (new_node);
			}
			else
			{
				new_node->next = save;
				new_node->prev = NULL;
				save->prev = new_node_next;
				return (new_node);
			}
		}
		save = save->next;
		count++;
	}
	return (NULL);
}
