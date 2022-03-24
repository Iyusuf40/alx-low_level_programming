/**
 * _strncpy - copies str
 * @dest: 1 par
 * @src: 2 par
 * @n: 3 par
 * Return: dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j, k, l;

	j = k = l = 0;

	while (*(src + j) != '\0')
	{
		j++;
	}

	while (k < n)
	{
		if (l > j)
		{
			*(dest + l) = 0;
		}
	else
		*(dest + l) = *(src + k);
	k++;
	l++;
	}
	return (dest);
}
