#include "main.h"

/**
 * print_triangle - prints a triangle of
 * @size: size
 */
void print_triangle(int size)
{
	int i, j, k;

	i = 1;

	if (size > 0)
	{
		while (i <= size)
		{
			j = size - (i + 1);

			while (j >= 0)
			{
				_putchar(' ');
				j--;
			}

			k = 0;
			while (k < i)
			{
				_putchar('#');
				k++;
			}
			if (i != size)
				_putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
