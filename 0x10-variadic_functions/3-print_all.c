#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_all - prints
 * @format: format to use
 * @...: optional args
 */
void print_all(const char * const format, ...)
{
	int i = 0, j = 0;
	char *ptr;
	va_list ap;
	ptr_t p[] = {
		{'c', "%c"},
		{'i', "%d"},
		{'s', "%s"},
		{'f', "%f"}
	};

	va_start(ap, format);

	while (format[i] != 0)
	{
		j = 0;
		while (j < 4)
		{
			if (format[i] == p[j].c)
			{
				ptr = p[j].pt;
				printf(ptr, va_arg(ap, int));
				if (format[i + 1] != 0)
					printf(", ");
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
