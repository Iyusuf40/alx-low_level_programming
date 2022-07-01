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
	hash_node_t **array = NULL;
	unsigned long int i;

	new_table = malloc(sizeof(hash_table_t));
	if (!new_table)
	{
		return (NULL);
	}
	new_table->size = size;

	array = malloc(sizeof(hash_node_t **) * size);
	if (!array)
	{
		free(new_table);
		return (NULL);
	}

	for (i = 0; i < size; i++)
		array[i] = NULL;
	new_table->array = array;
	return (new_table);
}
