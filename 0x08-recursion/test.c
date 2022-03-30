#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints as string
 * @s: array
 *
 */
void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	putchar(*s);
	_puts_recursion(++s);
}
