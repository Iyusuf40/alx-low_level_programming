#include "main.h"

/**
 * swap_int - does swapping
 * @a: first ptr par
 * @b: sec ptr par
 */
void swap_int(int *a, int *b)
{
	int n;

	n = *a;
	*a = *b;
	*b = n;
}
