#include <stddef.h>
#include <stdlib.h>
/**
 * create_array - function creates an array using malloc
 * @size: size of bytes to allocate to the array
 * @c: fill size with char c
 * Return: pointer / address of 1st byte allocated
 */
char *create_array(unsigned int size, char c)
{
	char *s;
	int i = 0;

	if (size == 0)
		return (NULL);

	s = malloc(size * sizeof(c));
	if (s == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		s[i] = c;

	return (s);
}
