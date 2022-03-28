/**
 * _memset - sets memory of s up to n with b
 * @s: carries mem start to set to n
 * @b: what to use to set
 * @n: the size to set to
 * Return: mem pos of s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}
