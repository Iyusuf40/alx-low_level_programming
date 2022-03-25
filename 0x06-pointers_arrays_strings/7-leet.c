/**
 * change - conv to leet
 * @c: arg
 * @chr1: first par
 * @chr2: sec par
 * @to_chr: char to replace
 * Return: c
 */
char *change(char *c, char chr1, char chr2, char to_chr)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if (*(c + i) == chr1 || *(c + i) == chr2)
			*(c + i) = to_chr;
		i++;
	}
	return (c);
}

/**
 * leet- encodes numbers
 * @c: par
 * Return: c
 */
char *leet(char *c)
{
	change(c, 'o', 'O', '0');
	change(c, 'a', 'A', '4');
	change(c, 'e', 'E', '3');
	change(c, 't', 'T', '7');
	change(c, 'l', 'L', '1');
	return (c);
}
