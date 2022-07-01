#include "hash_tables.h"
/**
 * hash_table_set - sets nodes in a hash table
 * @key: key to generate hash code
 * @ht: hash table
 * @value: value of key
 *
 * Return: 1 or 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int __attribute__((unused))hash_code, index;
	hash_node_t **address = NULL;

	hash_node_t __attribute__((unused))*head = NULL, *new_node;

	/*hash_code = hash_djb2((unsigned char *)key);*/
	index = key_index((unsigned char *)key, ht->size);

	address = ht->array + index;

	/*head = *address;*/
	new_node = malloc(sizeof(hash_node_t));
	if (!new_node)
	{
		return (0);
	}
	new_node->key = (char *)key;
	new_node->value = (char *)value;
	new_node->next = NULL;
	if (*address == NULL)
	{
		*address = new_node;
	}
	else if (*address && sizeof(*address) == sizeof(hash_node_t *))
	{
		if (sizeof(**address) == sizeof(hash_node_t))
		{
			new_node->next = *address;
			*address = new_node;
		}
	}
	else
		*address = new_node;
	return (1);
}
