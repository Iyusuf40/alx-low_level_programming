#include <stdio.h>
#include <stdlib.h>

/**
 * find_change- does find no of coins to give
 * @value: holds amount in int form
 * Return: num
 */
int find_change(int value)
{
	int sum = 0;

	if (value / 25 >= 1)
	{
		sum += value / 25;
		value %= 25;
	}
	if (value / 10 >= 1)
	{
		sum += value / 10;
		value %= 10;
	}
	if (value / 5 >= 1)
	{
		sum += value / 5;
		value %= 5;
	}
	if (value / 2 >= 1)
	{
		sum += value / 2;
		value %= 2;
	}
	if (value >= 1 && value < 10)
	{
		sum += 1;
		value -= 1;
		if (value >= 1 && value < 10)
			return (sum += (find_change(value)));
	}

	return (sum);
}

/**
 * main - prints minimum number of changeto give
 * @argc: count of arguments
 * @argv: a pointer to array of pointers
 * Return: 0
 */
int main(int argc, char **argv)
{
	int change, value;

	if (argc == 2)
	{
		value = atoi(argv[1]);
		change = find_change(value);
		printf("%d\n", change);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
