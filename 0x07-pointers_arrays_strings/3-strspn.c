/**
 * _strspn - does some weird cmp
 * @s: first par
 * @accept: second par
 * Return: j
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i, j, k, l, m, n;

	i = j = k = l = m = n = 0;

	while (*(s + i) != '\0')
		i++;

	while (*(accept + l) != '\0')
		l++;

	while (j < i)
	{
		m = 0;
		k = 0;
		while (k < l)
		{
			if (*(s + j) == *(accept + k))
			{
				m++;
				break;
			}
			else
				n = j;
			k++;
		}
		if (m == 0)
			break;
		j++;
	}
	return (j);
}
