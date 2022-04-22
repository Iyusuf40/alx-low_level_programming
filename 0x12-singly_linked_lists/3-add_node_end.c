#include "lists.h"
#include <string.h>

/**
 * add_node_end - adds a new node as the last element of the list
 * @head: head of the list passed as arg
 * @str: str value of the link to add
 * Return: pointer to the new node
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));
	list_t *current;

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		new->str = strdup(str);
		new->len = strlen(str);
		new->next = NULL;
		*head = new;
		return (new);
	}

	new->str = strdup(str);
	new->len = strlen(str);

	current = *head;
	while (current->next != NULL)
		current = current->next;

	new->next = NULL;
	current->next = new;
	return (new);
}
