/**
 * _strchr- finds a char in s
 * @s: strng to search
 * @c: char to find
 * Return: address of c or NULL
 */
char *_strchr(char *s, char c)
{
        if (*s == ' ' || *s == '\0')
                return ('\0');
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}
	return (s);
}
