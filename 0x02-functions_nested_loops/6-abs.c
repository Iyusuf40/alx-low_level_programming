#include <stdio.h>
#include "main.h"

/**
 * _abs - computes absolute value of c
 * @c : parameter to computed on
 * Return: c to caller
 */
int _abs(int c)
{
	if (c < 0)
	{
		c = c * -1;
		return (c);
	}
	else
		return (c);
}
