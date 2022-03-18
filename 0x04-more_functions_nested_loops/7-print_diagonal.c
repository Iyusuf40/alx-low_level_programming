#include "main.h"

/**
 * print_diagonal - prints seriesd of _
 * @n: the number of \ to print
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int x, y;

		x = 0;

		while (x < n)
		{
/*
 *			_putchar('\\');
 *			if (x != (n - 1))
 *				_putchar('\n');
 */
			y = 0;

			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			_putchar('\\');
			if (x != (n - 1))
				_putchar('\n');
			x++;
		}
	}
	_putchar('\n');
}
