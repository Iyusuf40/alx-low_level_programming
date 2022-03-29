#include <stdio.h>

/**
 * print_diagsums - prints diagonally
 * @a: array
 * @size: size of array
 */
void print_diagsums(int *a, int size)
{
	int i, k, l, n, sum1, sum2;

	l = 0;
	i = 0;
	sum1 = 0;
	sum2 = 0;
	k = 0;
	n = size - 1;

	for (l = 0; l < size; l++)
	{
		sum1 += *(a + i);
		sum2 += *(a + n + k);
		i += size + 1;
		k += size - 1;
	}
	printf("%d, %d\n", sum1, sum2);
}
