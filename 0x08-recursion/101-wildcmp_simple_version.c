/**
 * wildcmp - really wild comparison
 * @s1: strin1
 * @s2: string2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	int x;
	char *s;

	if (!*s1 && !*s2)
		return (1);

	if (*s1 == *s2)
		return (wildcmp(++s1, ++s2));

	if (*s2 == '*')
	{
		s = s2;
		x = wildcmp(s1, ++s2);
		if (!x)
			return (wildcmp(++s1, s));
		else if (x)
			return (1);
		else
			return (0);
	}

	return (0);
}
