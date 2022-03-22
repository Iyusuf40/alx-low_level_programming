#include "main.h"

/**
 * print_rev - prints array of chars in rev order
 * @s: is par
 */
void print_rev(char *s)
{
	int max;

	max = _strlen(s);

	while (max > 0)
	{
		_putchar(*(s + max));
		max--;
	}
	_putchar('\n');
}

/**
 * _strlen - prints array of chars in rev order
 * @s: is par
 * Return: i as len
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
