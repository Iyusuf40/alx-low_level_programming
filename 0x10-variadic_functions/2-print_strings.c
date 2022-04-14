#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include <stddef.h>
#include "variadic_functions.h"
/**
 * print_strings - prints all arguments save the first and second
 * @separator: item between arguments
 * @n: number of args
 * @...: optional args
 *
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i = 0;
	char *ptr;
	va_list ap;

	if (n == 0)
		return;
	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		ptr = va_arg(ap, char *);
		if (ptr != NULL)
			printf("%s", ptr);
		else if (ptr == NULL)
			printf("(nil)");
		if (separator != 0 && i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(ap);
}
