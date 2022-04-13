#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
/**
 * main - computes results for addition, subtraction etc arithmetic operations
 * @argc: argument count
 * @argv: pointer to arguments passed
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int a, b, res = 0;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	if (*(argv[2]) != '+' && *(argv[2]) != '-' && *(argv[2]) != '*'
		&& *(argv[2]) != '/' && *(argv[2]) != '%')
	{
		printf("Error\n");
		exit(99);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == '0')
	{
		printf("Error\n");
		exit(100);
	}
	a = atoi(argv[1]);
	b = atoi(argv[3]);
	res = get_op_func(argv[2])(a, b);
	printf("%d\n", res);

	return (0);
}
