#include "main.h"

/**
 * print_diagonal - prints seriesd of _
 * @n: the number of \ to print
 */
void print_diagonal(int n)
{
	if (n > 0)
	{
		int x = 0;

		while (x < n)
		{
			_putchar('\\');
			_putchar('\n');
			int y = -1;

			while (y < x)
			{
				_putchar(' ');
				y++;
			}
			x++;
		}
	}
	_putchar('\n');
}
