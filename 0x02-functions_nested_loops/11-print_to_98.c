#include "main.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * print_to_98 - prints n to 98
 * @n: is the starting point of print
 */
void print_to_98(int n)
{
	if (n < 98)
	{
		while (n < 98)
		{
			printf("%d, ", n);
			n++;
		}
	}
	else if (n > 98)
	{
		while (n > 98)
		{
			printf("%d, ", n);
			n--;
		}
	}
	printf("%d", 98);
	printf("\n");
}
