#include "lists.h"
/**
 * print_listint_safe - prints the int field of the list
 * @head: head of list
 * Return: number of links
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;

	if (head == NULL)
	{
		exit(98);
	}
	while (head && count < 8)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		head = (*head).next;
		count++;
	}
	return (count);
}