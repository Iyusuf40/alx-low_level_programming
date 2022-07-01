#include "hash_tables.h"
/**
 * hash_djb2 - a hash function
 * @str: string key
 *
 * Return: hash code
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long int hash = 5381;

	while (*str)
	{
		hash = (hash * 33) + (int)*str;
		str++;
	}

	return (hash);
}
