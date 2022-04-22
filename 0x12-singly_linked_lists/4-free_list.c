#include "lists.h"
#include <stdlib.h>

/**
 * free_list - frees links
 * @head: head of linked list
 */
void free_list(list_t *head)
{
	while (head != NULL)
	{
		head = head->next;
		free(head->str);
		free(head);
	}
}
