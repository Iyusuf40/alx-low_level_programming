/**
 * _strstr - does some weird cmp
 * @haystack: first par
 * @needle: second par
 * Return: where cpm matches
 */
char *_strstr(char *haystack, char *needle)
{
	unsigned int i, j, k, l, m;

	i = j = k = l = m = 0;

	while (*(haystack + i) != '\0')
		i++;

	while (*(needle + l) != '\0')
		l++;

	if (*needle == 0)
		return (haystack + j);

	while (j < i)
	{
		k = 0;
		while (k < l)
		{
			if (*(haystack + j) == *(needle + k))
			{
				while (m < l)
				{
					if (*(haystack + j + m) == *(needle + k + m))
						m++;
					else
						break;
				}
				if (m == l)
					return (haystack + j);
			}
			k++;
		}
		j++;
	}
	return (0);
}
