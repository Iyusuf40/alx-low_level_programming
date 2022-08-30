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
		s = s2; /* save index so as to fall back 
	       		 if no match is found */
		x = wildcmp(s1, ++s2); /* compare s1 with s2
	       				from index + 1 */
		if (!x && *(s1 + 1)) /* match not found */
			return (wildcmp(++s1, s)); /* fall back */
		else if (x) /* match found */
			return (1);
		else	/* match not found and s1 at last index */
			return (0);
	}

	if ((*s1 && !*s2) && (*(s2 - 1) == '*'))
		return (1);

	if (!*s1 && *s2 && *s2 != '*')
		return (0);

	if (*s1 != *s2)
		return (0);

	return (0);
}
