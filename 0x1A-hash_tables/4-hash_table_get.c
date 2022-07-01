#include "hash_tables.h"
/**
 * hash_table_get - gets value associated with a key
 * @ht: hash table
 * @key: key to search table
 *
 * Return: value or NULL
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t **address = NULL, *current;

	if (!ht)
		return (NULL);

	index = key_index((unsigned char *)key, ht->size);

	address = ht->array + index;
	if (!*address)
		return (NULL);

	current = *address;
	while (current)
	{
		if (!strcmp((char *)key, current->key))
			return (current->value);
		current = current->next;
	}
	return (NULL);
}
