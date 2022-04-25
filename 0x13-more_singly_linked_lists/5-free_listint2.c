#include "lists.h"
/**
 * free_listint2 - frees a list and sets head to NULL
 * @head: head of list
 */
void free_listint2(listint_t **head)
{
	listint_t *save;

	while (*head)
	{
		save = (*head)->next;
		free(*head);
		*head = NULL;
		*head = save;
	}
}
