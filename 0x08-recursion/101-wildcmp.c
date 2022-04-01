/**
 * wildcmp - really wild comparison
 * @s1: strin1
 * @s2: string2
 * Return: 1 or 0
 */
int wildcmp(char *s1, char *s2)
{
	char *i = s1;
	char *j = s2;

	if ((*j == '*' && *i != 0) && *(i + 1) != *(j + 1))
	{
		return (wildcmp(++i, j));
	}
	else if ((*j == '*' && *i != 0) && *(i + 1) == *(j + 1))
	{
		return (wildcmp(++i, ++j));
	}
	else if ((*j == '*' && *i == 0) && *(j + 1) == 0)
	{
		return (1);
	}
	else if ((*j == '*' && *i == 0) && *(j + 1) != 0 && *(j + 1) != '*' && *(j + 2) != '*')
	{
		return (wildcmp(i, ++j));
	}

	if (*i != *j && *j != '*')
		return (0);

	if (*i == *j && *i != 0 && *j != 0)
	{
		return (wildcmp(++i, ++j));
	}

	return (1);
}
