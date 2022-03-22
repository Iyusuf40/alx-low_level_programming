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

	while (*(s + half) != '\0')
	{
		if (*s == '\0')
			break;
		if (i % 2 == 0)
		{
			_putchar(*(s + half));
		}
		else if (i % 2 == 1)
			if (*(s + half + 1) != '\0')
				_putchar(*(s + half + 1));
		s++;
	}
	_putchar('\n');
}
