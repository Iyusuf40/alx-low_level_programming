#include "main.h"

/**
 * rev_string- reverses
 * @s: par
 */
void rev_string(char *s)
{
	int max, i, j;
	char *arr = "";

	max = _strlen(s);
	i = 0;
	j = 0;

	while (*s != *(s + max))
	{
		*(arr + i) = *s;
		s++;
		i++;
	}

	while (max >= 0)
	{
		*(s + max) = *(arr + j);
		max--;
		j++;
	}
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
