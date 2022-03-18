/**
 * _isdigit - checks if arg is a digit
 * @c: arg to check
 * Return: 1 if isdigit else 0
 */

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
