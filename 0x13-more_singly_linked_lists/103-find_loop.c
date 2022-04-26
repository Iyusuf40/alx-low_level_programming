#include "lists.h"
/**
 * find_listint_loop - prints the int field of the list
 * @head: head of list
 * Return: node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *save = NULL;

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		save = head;
		head = (*head).next;
		if (head > save)
		{
			return (head);
		}
	}
	return (NULL);
}
