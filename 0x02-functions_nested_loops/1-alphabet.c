#include <stdio.h>
#include "main.h"
/**
 * print_alphabet - prints lower
 * Return: void if successful
 */
void print_alphabet(void)
{
	int i = 'a';

	while (i <= 'z')
	{
		_putchar(i);
		i++;
	}
	_putchar('\n');
}
