#include "lists.h"
/**
 * add_dnodeint_end - adds a new node at the end of list
 * @head: head of list
 * @n: element value of new node
 * Return: new node created
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new_node, *save;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = NULL;
	if (!*head)
	{
		new_node->prev = NULL;
		*head = new_node;
		return (new_node);
	}
	save = *head;
	while (save)
	{
		if (save->next == NULL)
		{
			save->next = new_node;
			new_node->prev = save;
			break;
		}
		save = save->next;
	}
	return (new_node);
}
