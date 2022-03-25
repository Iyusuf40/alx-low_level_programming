/**
 * change - conv to rot
 * @c: arg
 * Return: c
 */
char *change(char *c)
{
	int i = 0;

	while (*(c + i) != '\0')
	{
		if ((*(c + i) >= 'A' && *(c + i) <= 'Z'))
		{
			if (((float)*(c + i) - 64) / 13 > 1)
				*(c + i) = *(c + i) - 13;
			else if (((float)*(c + i) - 64) / 13 <= 1)
				*(c + i) = *(c + i) + 13;
		}

		if ((*(c + i) >= 'a' && *(c + i) <= 'z'))
		{
			if (((float)*(c + i) - 96) / 13 > 1)
				*(c + i) = *(c + i) - 13;
			else if (((float)*(c + i) - 96) / 13 <= 1)
				*(c + i) = *(c + i) + 13;
		}
		i++;
	}
	return (c);
}

/**
 * rot13- encodes numbers
 * @c: par
 * Return: c
 */
char *rot13(char *c)
{
	change(c);
	return (c);
}
