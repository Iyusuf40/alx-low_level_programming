#include <stdio.h>

/**
 * main - prints the name of the executable
 * @argc: count of arguments
 * @argv: a pointer to array of pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}

	return (0);
}
