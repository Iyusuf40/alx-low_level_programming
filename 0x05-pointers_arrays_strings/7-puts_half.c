#include "main.h"

/**
 * puts_half - prints last half of string
 * @str: is par
 */
void puts_half(char *str)
{
	int i, half;
	char *s;

	i = 0;
	s = str;

	while (*str != '\0')
	{
		i++;
		str++;
	}
	
	half = i / 2;

	while (*s != '\0')
	{
		if (i % 2 == 0)
		{
			_putchar(*(s + half));
		}
		else
			_putchar(*(s + half + 1));
		s++;
	}
}
