#include <stdio.h>
#include <stdlib.h>
/**
 * main - adds numberss
 * @argc: number or arguments passed
 * @argv: argument vector
 * Return: 0 on success
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		for (i = 1; i < argc; i++)
		{
			if (*argv[i] == 0 || *argv[i] == ' ')
				sum += 0;
			else if (*argv[i] >= '0' && *argv[i] <= '9')
				sum += atoi(argv[i]);
			else
			{
				printf("Error\n");
				return (1);
			}
		}
		printf("%d\n", sum);
	}

	return (0);
}
