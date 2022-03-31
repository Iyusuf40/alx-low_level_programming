/**
* iprm - power of
* @n: first par
* @i: to
* Return: res
*/
int iprm(int n, int i)
{
	if (n == 1 || n < 0)
		return (0);

	if (i > n / 2)
		return (1);

	if (n % i == 0)
		return (0);

	return (iprm(n, ++i));
}

/**
 * is_prime_number - power of
 * @n: first par
 *
 * Return: res
 */
int is_prime_number(int n)
{
	int i = 2;
	int k = 0;

	if (n == 2)
		return (1);

	k = iprm(n, i);

	return (k);
}
