#include "lists.h"
/**
 * print_listint_safe - prints the int field of the list
 * @head: head of list
 * Return: number of links
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *save = head;

	if (head == NULL)
	{
		return (count);
	}
	while (head)
	{
		if (head > save)
		{
			printf("-> [%p] %d\n", (void *)head, (*head).n);
			exit(98);
		}
		printf("[%p] %d\n", (void *)head, (*head).n);
		save = head;
		head = (*head).next;
		count++;
	}
	return (count);
}
