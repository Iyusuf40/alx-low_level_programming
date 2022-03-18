#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints fizzbus
 * Return: 0 on success
 */
int main(void)
{
	int i;

	i = 1;

	while (i < 101)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
			printf("FizzBuzz ");
		else if (i % 3 == 0)
			printf("Fizz ");
		else if ((i % 5 == 0) && (i != 100))
			printf("Buzz ");
			else
				printf("Buzz");
		else
			printf("%d ", i);
		i++;
	}
	printf("\n");

	return (0);
}
