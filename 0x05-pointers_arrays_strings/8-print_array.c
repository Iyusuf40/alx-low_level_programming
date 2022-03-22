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
	{
		if (z == n - 1)
		{
			printf("%d", a[z]);
			break;
		}
		printf("%d, ", a[z]);
		z++;
	}
	printf("\n");
}
