#include "lists.h"
/**
 * insert_nodeint_at_index - inserts a new node at idx
 * @idx: index to insert new node
 * @n: field n of new node
 * @head: head of list
 *
 * Return: new node if successful else NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *new, *current, *prev;
	unsigned int count = 0;

	if (!*head)
		return (NULL);

	new = malloc(sizeof(listint_t));
	if (!new)
		return (NULL);
	new->n = n;
	current = *head;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}
	while (current)
	{
		if (count == idx)
		{
			new->next = current;
			prev->next = new;
			return (new);
		}
		count++;
		prev = current;
		current = current->next;
	}
	return (NULL);
}
