#include "main.h"
/**
 * set_bit - gets bit at index
 * @n: number to check
 * @index: index to check
 *
 * Return: 1 or 0
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(unsigned long int) * 8))
		return (-1);
	if (!(*n & (1 << index)))
	{
		*n = *n | (1 << index);
		return (1);
	}
	return (1);
}
