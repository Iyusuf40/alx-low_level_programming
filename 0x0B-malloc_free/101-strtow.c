#include <stdlib.h>
#include <stdio.h>

/**
 * strtow- splits string into words
 * @str: string to split
 * Return: array of pointers
 *
 */

char **strtow(char *str)
{
	int i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, len = 0;
	char *s, **ss;

	if (str == 0 || *str == 0)
		return (0);
	while (*(str + len) != 0)
		len++;

	s = malloc(len * sizeof(char));
	if (s == 0)
		return (0);

	while (*(str + j) != 0)
	{
		s[j] = *(str + j);
		j++;
	}
	s[j] = 0;

	while (s[i] != 0)
	{
		if (s[i] == ' ')
			s[i] = 0;
		i++;
	}

	while (k < len)
	{
		if (s[k] == 0)
			l++;
		k++;
	}
	ss = malloc(l * sizeof(s))
	if (ss == 0)
		return 0;
	while (m < len)
	{
		if (s[m] == 0)
		{
			ss[n] = s + m;
			n++;
		}
		m++;
	}
	return (ss);
}
