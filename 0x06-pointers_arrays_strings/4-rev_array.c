#include "main.h"

/**
 * pr_ch- rev an array of int
 *
 * @n: sec par
 */
void pr_ch(int n)
{
	if (n < 0)
		putchar('-');
	if (n / 10 > 0)
	{
		pr_ch(n / 10);
		putchar((n % 10) + '0');
	}
	if (n / 10 == 0)
		putchar(n + '0');
}

/**
 * reverse_array- rev an array of int
 * @a: 1 par
 * @n: sec par
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			_putchar(',');
			_putchar(' ');
		}
		pr_ch(a[i]);
		i--;
	}
	printf("\n");
}
