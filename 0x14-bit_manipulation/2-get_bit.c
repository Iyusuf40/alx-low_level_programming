#include "main.h"
/**
 * get_bit - gets bit at index
 * @n: number to check
 * @index: index to check
 *
 * Return: 1 or 0
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int copy = n;
	unsigned int len = 0;

	while (copy)
	{
		copy = copy >> 1;
		len++;
	}

	if (n == 0 && index == 0)
		return (0);

	if (index >= len)
		return (0);

	if ((n & (1 << index)))
		return (1);
	return (0);
}
