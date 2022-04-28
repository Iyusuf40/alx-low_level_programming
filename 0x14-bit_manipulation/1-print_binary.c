#include "main.h"
/**
 * print_binary - prints bin number
 *
 * @c: number to print
 */
void print_binary(unsigned long int c)
{
	if (c > 1)
		print_binary(c >> 1);
	(c & 1) ? _putchar('1') : _putchar('0');
}
