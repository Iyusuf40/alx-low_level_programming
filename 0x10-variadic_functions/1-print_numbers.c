#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints all arguments save the first and second
 * @separator: item between arguments
 * @n: number of args
 * @...: optional args
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(ap, int));
		if (separator != 0 && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
