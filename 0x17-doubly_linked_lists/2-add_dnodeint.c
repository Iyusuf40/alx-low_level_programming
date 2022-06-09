#include "lists.h"
/**
 * add_dnodeint - adds a new node at the end of list
 * @head: head of list
 * @n: element value of new node
 * Return: new node created
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new_node;

	new_node = malloc(sizeof(dlistint_t));
	if (!new_node)
		return (NULL);
	new_node->n = n;
	new_node->next = *head;
	new_node->prev = NULL;
	*head = new_node;
	return (new_node);
}
