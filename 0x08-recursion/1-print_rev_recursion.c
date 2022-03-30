#include "main.h"
/**
 * _print_rev_recursion - prints a string
 * @s: array
 *
 */
void _print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0')
	{
		return;
	}
	++i;
	_print_rev_recursion((s + i));
	if (*(s + i) != '\0')
		_putchar(*(s + i));
}
