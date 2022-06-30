#include "hash_tables.h"
/**
 * hash_table_create - creates a new hash_table
 * @size: size of table
 *
 * Return: new table created
 */
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *new_table = NULL;

	new_table = malloc((sizeof(hash_node_t **) * size) +
			sizeof(unsigned long int));
	return (new_table);
}
