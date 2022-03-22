#include "main.h"

/**
 * rev_string- reverses
 * @s: par
 */
void rev_string(char *s)
{
	int max, i;
	char *arr;

	max = _strlen(s) - 1;
	i = 0;

	while (*s != '\0')
	{
		*(arr + i) = *s;
		s++;
		i++;
	}

	i = 0;
	while (max >= 0)
	{
		*(s + max) = *(arr + i);
		max--;
		i++;
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
