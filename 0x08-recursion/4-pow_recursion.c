/**
 * _pow_recursion - power of
 * @x: first par
 * @y: power to
 * Return: res
 */
int _pow_recursion(int x, int y)
{
	int res = 1;

	if (y < 0)
		return (-1);

	if (y == 0)
		return (1);

	res = x * _pow_recursion(x, y - 1);

	return (res);
}
