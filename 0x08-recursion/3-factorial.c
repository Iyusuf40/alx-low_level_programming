/**
 * factorial- does it
 * @n: num to factor
 * Return: res
 */
int factorial(int n)
{
	int res = 0;

	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	res = n * factorial(n - 1);

	return (res);
}
