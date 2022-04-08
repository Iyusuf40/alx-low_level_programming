#include <stdio.h>
#include <stdlib.h>
/**
 * string_nconcat - joins n number of bytes of s2 to s1
 * @s1: base string
 * @s2: string to append
 * @n: number of chars of s2 to add to s1
 * Return: a pointer to s1
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i = 0, j = 0, k = 0, l = 0;
	char *s;

	if (s1 != 0)
	{
		while (*(s1 + i) != 0)
			i++;
	}
	if (s2 != 0)
	{
		while (*(s2 + j) != 0)
			j++;
	}
	if (n > j)
		n = j;
	s = malloc((n + i + 1) * sizeof(char));
	if (s == 0)
		return (0);
	while (k < i)
	{
		*(s + k) = *(s1 + k);
		k++;
	}
	while (k < (n + i + 1))
	{
		*(s + k) = *(s2 + l);
		k++;
		l++;
	}
	*(s + k) = 0;
	return (s);
}
