#include "main.h"

/**
 * print_square - makes a square
 * @size: of size - size
 */
void print_square(int size)
{
	if (size > 0)
	{
		int i, j;

		i = 0;
		while (i < size)
		{
			j = 0;

			while (j < size)
			{
				_putchar('#');
				j++;
			} _putchar('\n');
			i++;
		}
	}
	_putchar('\n');
}
