#include <stdio.h>
#include "main.h"
/**
 * print_alphabet_x10 - prints lower
 * Return: void if successful
 */
void print_alphabet_x10(void)
{
	int i;
	int loop = 0;

	while (loop < 10)
	{
		i = 'a';
		while (i <= 'z')
		{
			_putchar(i);
			i++;
		}
		_putchar('\n');
		loop++;
	}
}
