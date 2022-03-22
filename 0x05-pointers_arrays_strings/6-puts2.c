#include "main.h"

/**
 * puts2- prints alternate chars
 * @str: par
 */
void puts2(char *str)
{
	while (*str != '\0')
	{
		_putchar(*(str))
		str += 2;
	}
}
