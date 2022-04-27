#include "lists.h"
/**
 * print_listint_safe - prints the int field of the list
 * @head: head of list
 * Return: number of links
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *save = NULL;

	if (head == NULL)
	{
		return (count);
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		save = head;
		head = (*head).next;
		if (head >= save)
		{
			printf("-> [%p] %d\n", (void *)head, (*head).n);
			return (count + 1);
		}
		count++;
	}
	return (count);
}
