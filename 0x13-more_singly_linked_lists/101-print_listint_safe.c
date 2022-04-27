#include "lists.h"

/**
 * make_array - makes an array of addresses
 * @current: current position of head
 * @arr: array to add to
 * @count: position in the link
 */
void make_array(const listint_t *current, const listint_t *arr[], size_t count)
{
	arr[count] = current;
}

/**
 * check_array - checks an array
 * @current: current position of head
 * @arr: array to add to
 * @count: position in the link
 *
 * Return: 0 or 1
 */
int check_array(const listint_t *arr[], size_t count, const listint_t *current)
{
	size_t i = 0;

	while (i <= count)
	{
		if (arr[i] == current)
			return (1);
		i++;
	}
	return (0);
}

/**
 * print_listint_safe - prints the int field of the list
 * @head: head of list
 * Return: number of links
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t count = 0;
	const listint_t *save = NULL;
	const listint_t *arr[50];

	if (head == NULL)
	{
		return (count);
	}
	while (head)
	{
		printf("[%p] %d\n", (void *)head, (*head).n);
		save = head;
		make_array(save, arr, count);
		head = (*head).next;

		if (check_array(arr, count, head))
		{
			printf("-> [%p] %d\n", (void *)head, (*head).n);
			return (count + 1);
		}

		count++;
	}
	return (count);
}
