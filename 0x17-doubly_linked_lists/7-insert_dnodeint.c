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
	dlistint_t *new_node, *save, *_prev;
	unsigned int count = 0;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	save = *h;
	while (save)
	{
		if (idx && count == idx)
		{
			new_node->next = save;
			new_node->prev = save->prev;
			(save->prev)->next = new_node;
			save->prev = new_node;
			return (new_node);
		}
		_prev = save;
		save = save->next;
		count++;
		if (!save && count == idx)
		{
			new_node->next = save;
			new_node->prev = _prev;
			_prev->next = new_node;
			return (new_node);
		}
	}
	if (idx == 0)
	{
		new_node->next = *h;
		new_node->prev = NULL;
		if (*h)
			(*h)->prev = new_node;
		*h = new_node;
		return (new_node);
	}
	free(new_node);
	return (NULL);
}
