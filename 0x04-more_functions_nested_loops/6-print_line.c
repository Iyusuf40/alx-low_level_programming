#include "main.h"

/**
 * print_line - prints seriesd of _
 * @n: the number of _ to print
 */
void print_line(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			_putchar('_');
			x++;
		}
	}
	_putchar('\n');
}
