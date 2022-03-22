#include "main.h"
#include <stdio.h>

/**
 * print_array - prints elements of an array
 * @a: first par
 * @n: sec par
 */
void print_array(int *a, int n)
{
	int z = 0;

	while (z < n)
		printf("%d, ", a[z]);
	printf("\n");
}
