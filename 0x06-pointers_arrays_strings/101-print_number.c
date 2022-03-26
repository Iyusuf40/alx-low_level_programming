#include "main.h"

/**
 * pui - prints numbers
 * @n: par
 */
void pui(unsigned int n)
{
	if (n / 10 > 0)
		pui(n / 10);
	_putchar((n % 10) + '0');
}
/**
 * print_number - prints numbers
 * @n: par
 */
void print_number(int n)
{
	if (n < 0)
	{
		_putchar('-');
		n = -n;
	}
	pui(n);
}
