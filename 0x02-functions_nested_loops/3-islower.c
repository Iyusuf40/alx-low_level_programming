#include <stdio.h>
#include "main.h"
/**
 * _islower - checks if c is lower case or upper
 * @c: is int
 * Return: 1 if lower else 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
		return (1);
	else
		return (0);

}
