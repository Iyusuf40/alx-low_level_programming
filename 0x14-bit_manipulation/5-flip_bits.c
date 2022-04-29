#include "main.h"
/**
 * flip_bits - performs an or opearation on n and m
 * @n: operand 1
 * @m: operand 2
 * Return: diff_len
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff = 0;
	unsigned int diff_len = 0;

	diff = m ^ n;

	while (diff)
	{
		if (diff & 1)
			diff_len++;
		diff = diff >> 1;
	}
	return (diff_len);
}
