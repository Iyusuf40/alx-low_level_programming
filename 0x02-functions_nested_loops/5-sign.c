#include <stdio.h>
#include "main.h"
/**
 * print_sign - checks if n argument is less or more than 0
 * c: is int
 * Return: 1 and print + if positive, 0 if 0 else -1
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}

}
