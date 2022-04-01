#include <stdio.h>
#include <stdlib.h>

/**
 * main - multiplies 2 numbers and prints the result
 * @argc: count of arguments
 * @argv: a pointer to array of pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int mul;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%d\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
