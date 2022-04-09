#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc- mimmics built incalloc
 * @nmemb: number of elements
 * @size: byte size
 * Return: ptr
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (0);

	ptr = malloc(nmemb * size);
	if (ptr == 0)
		return (0);

	while (i < (size * nmemb))
	{
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
