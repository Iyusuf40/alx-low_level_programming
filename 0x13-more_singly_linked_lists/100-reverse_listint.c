#include "lists.h"
/**
 * reverse_listint - reverses a list
 * @head: head of list
 * Return: new head
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *save = NULL, *last = NULL;

	while (*head)
	{
		save = *head;
		*head = (*head)->next;
		save->next = last;
		last = save;
	}
	*head = last;

	return (*head);
}
