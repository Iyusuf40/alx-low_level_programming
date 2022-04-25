#include "lists.h"
/**
 * free_listint - frees a list
 * @head: head of list
 */
void free_listint(listint_t *head)
{
	listint_t *save;

	while (head)
	{
		save = head->next;
		free(head);
		head = save;
	}
}
