#include "main.h"

/**
 * print_triangle - prints a triangle of
 * @size: size
 */
void print_triangle(int size)
{
	int i, j, k;

	i = 1;

	while (i <= (size + 1))
	{
		j = size - i;

		while (j >= 0)
		{
			_putchar(' ');
			j--;
		}
		
		k = 1;
		while (k <= i)
		{
			_putchar('#');
			k++;
		}
		i++;
	}
	_putchar('\n');
}
