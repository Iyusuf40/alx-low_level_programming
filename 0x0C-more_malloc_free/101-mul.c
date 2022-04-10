#include <stdlib.h>
#include <stdio.h>
/**
 * main - program entry
 * @argc: number of arguments passed
 * @argv: pointer to addresses of arguments passed
 * Return: 0 if success
 */
int main(int argc __attribute__((unused)), char **argv __attribute__((unused)))
{
	if (argc != 3)
	{
		printf("Error\n");
		exit(98);
	}

	printf("%d", atoi(argv[1]) * atoi(argv[2]));
	return (0);
}
