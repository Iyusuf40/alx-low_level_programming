#include <stdio.h>
#include <stdlib.h>
/**
 * malloc_checked - this function craetes a space in memory using malloc
 * @b: stand in  for size_t return value of sizeof function
 * Return: address of memory
 */
/*
void *malloc_checked(unsigned int b)
{
	if (malloc(b) == 0)
		exit(98);
	return (malloc(b));
}
*/
void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);
	return (ptr);
}
