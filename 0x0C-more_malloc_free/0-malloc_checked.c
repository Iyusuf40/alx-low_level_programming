/**
 * malloc_checked - this function craetes a space in memory using malloc
 * @b: stand in  for size_t return value of sizeof function
 * Return: address of memory
 */
void *malloc_checked(unsigned int b)
{
	if (b == 0)
		return (0);
	else if (malloc(b) == 0)
		exit(98);
	return (malloc(b));
}
