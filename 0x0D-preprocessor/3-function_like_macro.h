#ifndef HEADER
#define HEADER
/**
 * val- converts negative integers to positive
 * @x: int to convert
 * Return: x
 */
unsigned int val(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
#define ABS(x) val(x)

#endif
