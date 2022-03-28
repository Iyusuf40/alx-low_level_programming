/**
 * _memcpy - copies memory of src up to n to dest
 * @src: source
 * @dest: destination
 * @n: the size to cpy to
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
