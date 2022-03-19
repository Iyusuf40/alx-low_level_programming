#include "main.h"

/**
 * print_number - prints char numbers
 * @n: number to print
 */
void print_number(int n)
{
	n = (short int) n;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if ((n / 10) > 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}

	if (n < 10)
	{
		_putchar(n + '0');
	}

}
