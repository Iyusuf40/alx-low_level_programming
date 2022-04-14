#include <stdio.h>
#include <stdlib.h>
#include <stdarg.h>
/**
 * sum_them_all - sums all arguments save the first
 * @n: number of arguments
 * @...: optional args
 * Return: sum of args
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0, i = 0;
	va_list ap;

	if (n == 0)
		return (0);
	va_start(ap, n);
	for (i = 0; i < n; i++)
		sum += va_arg(ap, int);
	va_end(ap);
	return (sum);
}
