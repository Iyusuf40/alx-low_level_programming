#include "lists.h"
#include <string.h>

/**
 * add_node - adds a new node as the 1st element of the list
 * @head: head of the list passed as arg
 * @str: str value of the link to add
 * Return: pointer to the new node
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new = malloc(sizeof(list_t));

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = *head;
	*head = new;
	return (new);
}
