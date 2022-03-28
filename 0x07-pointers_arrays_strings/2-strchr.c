/**
 * _strchr- finds a char in s
 * @s: strng to search
 * @c: char to find
 * Return: address of c or NULL
 */
char *_strchr(char *s, char c)
{
        if (*s == '')
                return ('\0');
	else
	{
		while (*s != '\0')
		{
			if (*s == c)
				return (s);
			s++;
		}
	}
	return (s);
}
