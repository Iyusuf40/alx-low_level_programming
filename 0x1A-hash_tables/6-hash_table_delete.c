#include "hash_tables.h"
/**
 * hash_table_delete - frees memory allocated to a table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i = 0;
	hash_node_t *current = NULL, *save = NULL;

	if (!ht)
		return;

	size = ht->size;
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			save = current->next;
			free(current->key);
			free(current->value);
			free(current);
			current = save;
		}
	}
	free(ht->array);
	free(ht);
}
