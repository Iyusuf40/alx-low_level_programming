#include "main.h"
/**
 * main_print_rev_recursion - prints a string
 * @s: array
 *
 */
void main_print_rev_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == '\0' || *(s + i) == 0)
	{
		return;
	}
	++i;
	main_print_rev_recursion((s + i));
	if (*(s + i) != '\0')
		_putchar(*(s + i));
}

/**
 * _print_rev_recursion - prints a string
 * @s: array
 *
 */
void _print_rev_recursion(char *s)
{
	if (*s == 0)
		return;
	main_print_rev_recursion(s);
	_putchar('\n');
}
