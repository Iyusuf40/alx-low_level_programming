#include <stdio.h>

/**
 * main - prints the name of the executable
 * @argc: count of arguments
 * @argv: a pointer to array of pointers
 * Return: 0
 */
int main(int __attribute__ ((unused)) argc, char **argv)
{
	printf("%s\n", argv[0]);

	return (0);
}
