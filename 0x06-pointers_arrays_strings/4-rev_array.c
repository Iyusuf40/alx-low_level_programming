#include "main.h"

/**
 * pr_uch- rev an array of int
 *
 * @n: sec par
 */
void pr_uch(unsigned int n)
{
	if (n / 10 != 0)
		pr_uint(n / 10);
	_putchar((n % 10) + '0');
}

/**
 * pr_ch- rev an array of int
 *
 * @n: sec par
 */
void pr_ch(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	pr_uch(n);
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
	_putchar('\n');
}
