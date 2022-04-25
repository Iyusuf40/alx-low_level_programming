#include "lists.h"
/**
 * listint_t *add_nodeint_end - adds a node and makes it the head of list
 * @head: current head of list
 * @n: n field of the node to add
 * Return: pointer to new head/new node
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new = NULL, *get_to_last_node = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (*head);
	}

	get_to_last_node = *head;

	while (get_to_last_node->next)
	{
		get_to_last_node = get_to_last_node->next;
	}

	get_to_last_node->next = new;
	return (new);
}
