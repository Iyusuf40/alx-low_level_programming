#include "hash_tables.h"
/**
 * hash_table_delete - frees memory allocated to a table
 * @ht: the hash table
 */
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *current = NULL, *save = NULL;

	if (!ht)
		return;

	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			save = current->next;
			free(current->key);
			free(current->value);
			current = save;
		}
	}
	free(ht);
}
