/**
 * _pow - expo
 * @s: first par
 * @v: sec par
 * Return: y
 */
int _pow(int s, int v)
{
	int y;

	y = 1;
	for (v = v; v > 0; v--)
	{
		y = y * s;
	}
	return (y);
}

/**
 * _atoi - ch to int
 * @s: first par
 * Return: x
 */
int _atoi(char *s)
{
	int len, ilen, slen, i, j, v, y;
	unsigned int x;
	char *ss;
	int *si;
	char *sss;
	char *sign;

	x = 0;
	y = 0;
	ss = s;
	sign = s;
	si = &j;
	len = 0;
	i = 0;
	slen = 0;
	ilen = 0;
	sss = s;
	while (*sign != '\0')
	{
		if (*sign == '-')
		{
			slen++;
			sign++;
			if (*sign >= '0' && *sign <= '9')
				break;

		}
		else
			sign++;
	}
	while (*ss != '\0')
	{
		ss++;
		len++;
	}
	while (*sss != '\0')
	{
		if (*sss >= '0' && *sss <= '9')
		{
			ilen++;
			sss++;
			if (*sss < '0' || *sss > '9')
				break;
		}
		else
			sss++;
	}
	while (i < len)
	{
		if (*s >= '0' && *s <= '9')
		{
			*si = *s - '0';
			v = _pow(10, (ilen - 1));
			y = v * *si;
			x += y;
			ilen--;
			s++;
			if (*s < '0' || *s > '9')
				break;
		}
		else
		{
			s++;
		}
		i++;
	}
	if (slen % 2 == 1)
		return ((int) (-x));
	return (x);
}
