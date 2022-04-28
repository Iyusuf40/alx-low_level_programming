#include "main.h"
/**
 * bin_checker- checks for other than 0 and 1
 * @b: string to check
 *
 * Return: 0 or 1
 */
int bin_checker(const char *b)
{
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		b++;
	}

	return (1);
}

/**
 * binary_to_uint- checks for other than 0 and 1
 * @b: string to check
 *
 * Return: 0 or 1
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int res;

	if (b == NULL || !bin_checker(b))
		return (0);

	res = (*b - '0');
	while (*b)
	{
		if (!b[1])
			return (res);
		res = res * 2;
		res += (b[1] - '0');
		b++;
	}
	return (res);
}
