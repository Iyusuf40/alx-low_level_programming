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
	list_t *temp2;

	if (new == NULL)
		return (NULL);
	if (*head == NULL)
	{
		*head = malloc(sizeof(list_t));
			 if (*head == NULL)
				 return (NULL);
	}

	new->str = strdup(str);
	new->len = strlen(str);
/*	(*head)->next = new;
	temp = *head;
	*head = new;
	new = temp;*/
	new->next = NULL;
	(*head)->next = new;
	temp2 = *head;
	*head = new;
	new = temp2;
	return (new);
}
