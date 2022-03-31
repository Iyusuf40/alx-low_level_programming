/**
 * sqt - power of
 * @n: first par
 * @i: to
 * Return: res
 */
int sqt(int n, int i)
{
	if (i * i == n)
		return (i);

	if (i > n / 2)
		return (-1);
	return (sqt(n, ++i));
}

/**
 * _sqrt_recursion - power of
 * @n: first par
 *
 * Return: res
 */
int _sqrt_recursion(int n)
{
	int k = 0;
	int i = 1;

	if (n == 1)
		return (1);

	k += sqt(n, i);

	return (k);
}
