#include <stdio.h>
#include <stdlib.h>

/**
 * checker- checks if a char is between 0 and 9
 * @s: string to chec
 * Return: 1 or 0
 */
int checker(char *s)
{
	while (*s != 0)
	{
		if (*s >= '0' && *s <= '9')
			s++;
		else
			return (0);
	}
	return (1);
}

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
			if (checker(argv[i]) == 1)
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
