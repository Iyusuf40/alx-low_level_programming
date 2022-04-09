#include <stdlib.h>
#include <stdio.h>
/**
 * _realloc- a stdlib realloc function mimic
 * @ptr: source address
 * @old_size: size of previous memory
 * @new_size: size of new allocaed memory
 * Return: new address of newly allocated memory
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *pt, *ppt;
	unsigned int i = 0;

	ppt = ptr;
	pt = malloc(new_size);
	if (pt == 0)
		return (0);
	if (ptr == 0)
		return (pt);
	if (new_size == old_size)
		return (ptr);
	if (new_size == 0)
	{
		free(ptr);
		return (0);
	}

	while (i < old_size && i < new_size)
	{
		pt[i] = ppt[i];
		i++;
	}
	free(ptr);
	return (pt);
}
