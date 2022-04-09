#include <stdlib.h>
#include <stdio.h>
#include <string.h>
/**
 * _calloc- mimmics built incalloc
 * @nmemb: number of elements
 * @size: byte size
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i = 0;
	char *ptr;
	void *pt;

	if (nmemb == 0 || size == 0)
		return (0);
	if (malloc(nmemb * size) == 0)
		return (0);
	ptr = malloc(nmemb * size);

	while (i < (nmemb / size))
	{
		ptr[i] = 0;
		i += size;
	}
	pt = ptr;
	return (pt);
}
