#include "main.h"

/**
 * rev_string- reverses
 * @s: par
 */
void rev_string(char *s)
{
	int max, i, j;
	char *ss;
	char arr[1000];

	max = _strlen(s) - 1;
	ss = s;
	i = 0;
	j = 0;

	while (*s != '\0')
	{
		*(arr + i) = *s;
		s++;
		i++;
	}

	while (max >= 0)
	{
		*(ss + max) = *(arr + j);
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
