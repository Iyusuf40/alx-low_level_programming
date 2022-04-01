#include <stdio.h>

/**
 * main - prints the number of arguments passed
 * @argc: count of arguments
 * @argv: a pointer to array of pointers
 * Return: 0
 */
int main(int argc, char __attribute__ ((unused)) **argv)
{
	printf("%d\n", argc - 1);

	return (0);
}
