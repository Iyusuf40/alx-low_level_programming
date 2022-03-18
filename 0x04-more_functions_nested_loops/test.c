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
		int x = 0;

		while (x < n)
		{
			putchar('\\');
			putchar('\n');
			int y = -1;

			while (y < x)
			{
				putchar(' ');
				y++;
			}
			x++;
		}
	}
	putchar('\n');
}
 int main(void)
{
	print_diagonal(0);
	print_diagonal(2);
	print_diagonal(12);
}
