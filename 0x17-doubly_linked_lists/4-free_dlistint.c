#include "lists.h"
/**
 * free_dlistint - frees a linked list
 * @head: head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *save;

	while (head)
	{
		save = head->next;
		free(head);
		head = save;
	}
}
