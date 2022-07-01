#include "hash_tables.h"
unsigned long int key_index(const unsigned char *key,
		unsigned long int size)
{
	unsigned long int hash_code;

	hash_code = hash_djb2((unsigned char *)key);

	return (hash_code % size);
}
