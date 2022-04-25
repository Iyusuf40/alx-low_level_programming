#include "lists.h"
/**
 * sum_listint - sums all n field of list
 * @head: head of list
 * Return: sum
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (!head)
		return (0);
	while (head)
	{
		sum += head->n;
		head = (*head).next;
	}

	return (sum);
}
