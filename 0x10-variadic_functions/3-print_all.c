#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * cprint - prints char
 * @ap: pointer to optional args
 */
void cprint(va_list ap)
{
	char b = va_arg(ap, int);

	printf("%c", b);
}

/**
 * iprint - prints integer
 * @ap: pointer to optional args
 */
void iprint(va_list ap)
{
	int b = va_arg(ap, int);

	printf("%d", b);
}

/**
 * sprint - prints string of chars
 * @ap: pointer to optional args
 */
void sprint(va_list ap)
{
	char *b = va_arg(ap, char *);

	if (b == 0)
	{
		printf("(nil)");
		return;
	}
	printf("%s", b);
}

/**
 * fprint - prints floating point number
 * @ap: pointer to optional args
 */
void fprint(va_list ap)
{
	double b = va_arg(ap, double);

	printf("%f", b);
}

/**
 * get_func - chooses appropriate function and returns it
 * @s: char used to aid choice
 * Return: function
 */
void (*get_func(char s))(va_list)
{
	int i = 0;
	ptr_t p[] = {
		{'c', cprint},
		{'i', iprint},
		{'s', sprint},
		{'f', fprint},
		{'z', NULL}
	};

	while (i < 4 && p[i].c != s)
	{
		i++;
	}
	return (p[i].f);
}

/**
 * print_all - prints format
 * @format: pointer to string
 */
void print_all(const char * const format, ...)
{
	int i = 0;
	va_list ap;

	va_start(ap, format);

	while (format[i] != 0)
	{
		if (get_func(format[i]) != 0)
		{
			get_func(format[i])(ap);
			if (format[i + 1] != 0)
				printf(", ");
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}
