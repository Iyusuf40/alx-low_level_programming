#include "lists.h"
/**
 * listint_t *add_nodeint - adds a node and makes it the head of list
 * @head: current head of list
 * @n: n field of the node to add
 * Return: pointer to new head/new node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new = NULL;

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);

	(*new).n = n;
	(*new).next = *head;
	*head = new;
	return (*head);
}
