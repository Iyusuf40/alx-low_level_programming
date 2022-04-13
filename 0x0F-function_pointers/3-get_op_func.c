#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * get_op_func - a function that checks for appropriate function and returns it
 * @s: operator checker
 * Return: function to operate
 */
int (*get_op_func(char *s))(int, int)
{
	op_t ops[] = {
		{"+", op_add},
		{"-", op_sub},
		{"*", op_mul},
		{"/", op_div},
		{"%", op_mod},
		{NULL, NULL}
	};
	int i = 0;

	while ((*((ops[i]).op) != *s) && i < 6)
		i++;
	if (i == 6)
		return (0);
	return ((ops[i]).f);
}
