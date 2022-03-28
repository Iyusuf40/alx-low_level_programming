#include <stddef.h>
/**
 * _strchr- finds a char in s
 * @s: strng to search
 * @c: char to find
 * Return: address of c or NULL
 */
char *_strchr(char *s, char c)
{
	int i, j;

	i = j = 0;

	while (*(s + i) != 0)
		i++;

	while (j <= i)
	{
		if (*(s + j) == c)
			return (s + j);
		else if (*(s + j) == '\0')
			return (s + j);
		j++;
	}

	return (NULL);
}
