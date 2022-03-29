/**
 * _strpbrk - does some weird cmp
 * @s: first par
 * @accept: second par
 * Return: j
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i, j, k, l;

	i = j = k = l = 0;

	while (*(s + i) != '\0')
		i++;

	while (*(accept + l) != '\0')
		l++;

	while (j < i)
	{
		k = 0;
		while (k < l)
		{
			if (*(s + j) == *(accept + k))
			{
				return (s + j);
			}
			k++;
		}
		j++;
	}
	return (0);
}
