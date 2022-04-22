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
		if (head->str != NULL)
			free(head->str);
		free(head);
		head = head->next;
	}
}
