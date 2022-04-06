#include <stdlib.h>
/**
 * argstostr- joins string passed as arg on command line each ending with a \n
 * @ac: argument count
 * @av: pointer to strings
 *
 * Return: a pointer to the new string if successful
 */
char *argstostr(int ac, char **av)
{
	int i = 0, j = 0, k = 0;
	size_t l = 0, m = 0, len = 0;
	char *s;

	if (ac == 0 || av == 0)
		return (0);

	while (i < ac)
	{
		while ((av[i][j] != 0))
		{
			len++;
			j++;
		}
		len++;
		i++;
	}

	s = malloc((len * sizeof(char)) - 2);
	if (s == 0)
		return (0);
	while (k < ac)
	{
		if (m >= ((len * sizeof(char)) - 2))
			break;
		l = 0;
		while (av[k][l] != 0)
		{
			s[m] = av[k][l];
			l++;
			m++;
		}
		s[m] = '\n';
		k++;
		m++;
	}
	return (s);
}
