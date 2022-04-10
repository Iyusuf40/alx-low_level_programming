#include <stdlib.h>
#include <stdio.h>
/**
 * check_digit- checks if a string contains only digits
 * @s: first string
 * Return: 1 if true and 0 if false
 */
int check_digit(char *s)
{
	int i = 0;

	while (s[i] != 0 && (s[i] >= '0' && s[i] <= '9'))
		i++;

	if (s[i] != 0)
		return (0);
	return (1);
}
/**
 * is_both_digit - validate both strings to be all digit chars
 * @s1: string 1
 * @s2: string 2
 * Return: less than 2 if both not composed of digits but 2 if both are
 */
int is_both_digit(char *s1, char *s2)
{
	int res = 0;

	res = check_digit(s1);
	res += check_digit(s2);
	return res;
}

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
	if (is_both_digit(argv[1], argv[2]) != 2)
	{
		printf("Error\n");
		exit(98);
	}
	return (0);
}
