/**
 * _strcpy - copies a str from a to b
 * @dest: first par
 * @src- sec par
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *psrc;
	int size, index;
	
	psrc = src;
	size = 0;
	index = 0;

	while (*psrc != '\0')
	{
		size++;
		psrc++;
	}

	while (index <= size)
	{
		dest[index] = *(src + index);
		index++;
	}
	return (*dest);
}
