#include "main.h"

/**
 * print_number - prints char numbers
 */
void print_number(int n)
{
	int i;

	i = 9;

	if (n < 0)
	{
		n = -n;
		_putchar('-');
	}

	if (n >= 10)
	{
		while (i > 0)
		{
			if ((n / 10) == i)
			{
				_putchar((n / 10) + '0');
				_putchar((n % 10) + '0');
			} i--;
		}
	}
	else
		_putchar(n + '0');
	_putchar('\n');
}
