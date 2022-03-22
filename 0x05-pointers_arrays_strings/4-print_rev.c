#include "main.h"

/**
 * print_rev(char *s) - prints array of chars in rev order
 * @s: is par
 */
void print_rev(char *s)
{
	int max, j;

	max = _strlen(s);

	while (max > -1)
	{
		_putchar(*s + max);
		max--;
	}
}

/**
 * _strlen(char *s) - prints array of chars in rev order
 * @s: is par
 */
int _strlen(char *s)
{
	int i;

	i = 0;
	while (*s != '\0')
	{
		s++;
		i++;
	}
	return (i);
}
