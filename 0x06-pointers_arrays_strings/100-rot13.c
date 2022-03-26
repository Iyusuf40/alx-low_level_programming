/**
 * change- changes chars
 * @c: par
 * @a: sec par
 * @z: third par
 * Return: c
 */
char *change(char *c, char a, char z)
{
	int i, j, k;

	i = j = 0;

	while (*(c + i) != '\0')
	{
		while (*(c + j) >= a && *(c + j) <= z)
		{
			k = *(c + i) + 13;
			*(c + i) = *(c + i) + 13;
			if (k > z)
			{
				*(c + i) = ((a - 1) + ((k - (a - 1)) % 26));
			}
		j = i + 1;
		i++;
	}
	return (c);
}

/**
 * rot13- encodes numbers
 * @c: par
 * Return: c
 */
char *rot13(char *c)
{
	change(c, 'a', 'z');
	change(c, 'A', 'Z');
	return (c);
}
