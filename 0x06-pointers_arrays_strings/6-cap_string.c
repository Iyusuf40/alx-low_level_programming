/**
 * string_toupper - conv to upper
 * @c: arg
 * Return: c
 */
char *cap_string(char *c)
{
	int i = 0;
	while (*(c + i) != '\0')
	{
		if (*(c + i) >= 'a' && *(c + i) <= 'z')
			if (*(c + i - 1) < '0' || *(c + i - 1) > '9')
				if((*(c + i - 1) < 'A' || *(c + i - 1) > 'Z') && (*(c + i - 1) < 'a' || *(c + i - 1) > 'z'))
					*(c + i) = *(c + i) - 32;
    		i++;
	}
}
