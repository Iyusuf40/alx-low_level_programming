#include <stdio.h>
#include <stdlib.h>

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
			/*putchar('\\');
			if (x != (n - 1))
				putchar('\n');*/
			y = 0;

			while (y < x)
			{
				/*if (y != (n - 1))*/
				putchar(' ');
				y++;
			}
			putchar('\\');
			if (x != (n - 1))
				putchar('\n');
			x++;
		}
	}
	putchar('\n');
}
 int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(10);
	print_diagonal(-4);

	return (0);
}
