#include <stdio.h>
#include "main.h"
/**
 * print_last_digit - prints last digit of a number
 * @i: is int parameter
 *
 * Return: c to caller
 */
int print_last_digit(int i)
{
	int c = i % 10;

	if (c < 0)
	{
		c = -c;
		_putchar('0' + c);
		return (c);
	}
	else
	{
		_putchar('0' + c);
		return (c);
	}
}
