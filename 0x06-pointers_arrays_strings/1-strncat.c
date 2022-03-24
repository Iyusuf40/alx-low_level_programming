/**
 * _strncat - ccats
 * @dest: first par
 * @src: sec par
 * @n: third par
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j, len;
	char *s;

	s = src;
	i = len = j = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}

	while (*(src + len) != '\0')
	{
		len++;
	}

	if (n <= len)
	{
		while (*src != *(s + n))
		{
			*(dest + i) = *(src + j);
			i++;
			src++;
		}
	}
	else
	{
		n = len;
		while (*src != *(s + n))
		{
			*(dest + i) = *(src + j);
			i++;
			src++;
		}
	}
	return (dest);
}
