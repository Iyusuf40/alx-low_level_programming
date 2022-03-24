#include "main.h"
#include <stdio.h>

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
			putchar(',');
			putchar(' ');
		}
		pr_ch(a[i]);
		i--;
	}
	putchar('\n');
}

int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};
    reverse_array(a, sizeof(a) / sizeof(int));
    return (0);
}
