/**
 * malloc_checked - this function craetes a space in memory using malloc
 * @b: stand in  for size_t return value of sizeof function
 *
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;
	ptr = malloc(b);
	if (ptr = 0)
		exit(98);
	return (ptr);
}
