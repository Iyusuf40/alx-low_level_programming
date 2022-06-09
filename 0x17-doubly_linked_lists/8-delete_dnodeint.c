#include "lists.h"
/**
 * delete_dnodeint_at_index - deletes a node at index idx
 * @head: head of list
 * @index: index
 *
 * Return: 1 or -1
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *save;
	unsigned int count = 0;

	save = *head;
	while (save)
	{
		if (count == index)
		{
			if (index == 0)
			{
				*head = save->next;
				if (*head)
					(*head)->prev = NULL;
				return (1);
			}
			(save->prev)->next = save->next;
			if (save->next)
				(save->next)->prev = save;
			return (1);
		}
		save = save->next;
		count++;
		if (count > index)
			return (-1);
	}
	return (-1);
}
