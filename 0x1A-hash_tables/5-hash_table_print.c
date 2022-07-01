#include "hash_tables.h"
/**
 * hash_table_print - prints a hash table
 * @ht: hash table to print
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int size, i;
	hash_node_t *current = NULL;
	int flag = 0;

	if (!ht)
		return;

	size = ht->size;
	printf("{");
	for (i = 0; i < size; i++)
	{
		current = ht->array[i];
		while (current)
		{
			if (flag)
				printf(", ");
			printf("'%s': '%s'", current->key,
						current->value);
			current = current->next;
			flag = 1;
		}
	}
	printf("}\n");
}
