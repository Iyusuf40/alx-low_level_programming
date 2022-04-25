#include "lists.h"
/**
 * delete_nodeint_at_index - unlinks and frees node at index index
 * @head: head of index
 * @index: index to unlink
 * Return: success 1 else -1
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current, *prev;
	unsigned int count = 0;

	if (!(*head))
		return (-1);

	if (index == 0)
	{
		prev = *head;
		*head = (*head)->next;
		free(prev);
		return (1);
	}

	current = prev = *head;
	while (current)
	{
		if (count == index)
		{
			prev->next = current->next;
			free(current);
			return (1);
		}
		count++;
		prev = current;
		current = current->next;
	}

	return (-1);
}
