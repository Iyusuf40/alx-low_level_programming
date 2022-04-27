#include "lists.h"
/**
 * update_array - updates an array
 * @count: index to update
 * @current: address of current head
 * @arr: array to update
 */
void update_array(listint_t *arr[], size_t count, listint_t *current)
{
	arr[count] = current;
}

/**
 * _check_array - checks an array
 * @count: index to update
 * @current: address of current head
 * @arr: array to update
 * Return: 0 or 1
 */
int _check_array(listint_t *arr[], size_t count, listint_t *current)
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
 * find_listint_loop - prints the int field of the list
 * @head: head of list
 * Return: node where loop starts
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *save = NULL;
	size_t count = 0;
	listint_t *arr[200];

	if (head == NULL)
	{
		return (NULL);
	}
	while (head)
	{
		save = head;
		update_array(arr, count, save);
		head = (*head).next;
		if (_check_array(arr, count, head))
		{
			return (head);
		}
		count++;
	}
	return (NULL);
}
