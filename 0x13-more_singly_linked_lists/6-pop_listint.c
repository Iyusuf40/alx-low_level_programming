#include "lists.h"
/**
 *  pop_listint- returns data og head and deletes head
 *  Return: data of head
 *  @head: head of list
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *save = NULL;

	if (!*head)
		return (0);

	data = (*head)->n;

	save = *head;
	*head = (*head)->next;
	free(save);

	return (data);
}
