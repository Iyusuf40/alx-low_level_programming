#include "lists.h"
/**
 * free_listint_safe - frees list
 * @h: head of list
 * Return: number of links
 */
size_t free_listint_safe(listint_t **h)
{
	size_t count = 0;
	listint_t *save = NULL, *save_n = NULL;

	if (*h == NULL || h = NULL)
	{
		return (count);
	}
	while (*h)
	{
		save = *h;
		save_n = (**h).next;
		free(*h);
		*h = save_n;
		if (*h >= save)
		{
			*h = NULL;
			h = NULL;
			return (count + 1);
		}
		count++;
	}
	*h = NULL;
	h = NULL;
	return (count);
}
