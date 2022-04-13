#include <stdlib.h>
#include <stdio.h>
/**
 * main- prints out opcodes of itself
 * @argc: number of arguments passed
 * @ argv: pointer to arguments
 *
 * Return: 0 on success
 */
int main(int argc, char **argv)
{
	int i, j;
	int (*f)(int, char **);
	char *ptr;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	i = atoi(argv[1]);
	if (i <= 0)
	{
		printf("Error\n");
		exit(2);
	}
	f = &main;
	ptr = f;
	for (j = 0; j < i; j++)
		printf("%x ", ptr[j]);
	printf("\n");
	return (0);
}
