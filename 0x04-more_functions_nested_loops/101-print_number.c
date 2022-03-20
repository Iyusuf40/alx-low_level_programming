#include "main.h"

/**
 * print_number - prints char numbers
 * @n: number to print
 */
void print_number(int n)
{
	if (n < -2147483647)
	{
		int t;
		int i;

		_putchar('-');
		t = -(n / 10000);
		i = -(n % 10000);
		print_number(t);
		print_number(i);
	}

	if (n < 0 && n != -2147483648)
	{
		n = -n;
		_putchar('-');
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}

	if (n < 10 && n >= 0)
	{
		_putchar(n + '0');
	}

}
