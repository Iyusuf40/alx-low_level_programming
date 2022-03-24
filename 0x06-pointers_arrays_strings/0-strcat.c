/**
 * _strcat- ccats sec par to fir
 * @dest: first par
 * @src: sec par
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = 0;
	while (*(dest + i) != '\0')
	{
		i++;
	}
	j = 0;
	while (*src != '\0')
	{
		*(dest + i) = *(src + j);
		i++;
		src++;
	}
	return dest;
}
