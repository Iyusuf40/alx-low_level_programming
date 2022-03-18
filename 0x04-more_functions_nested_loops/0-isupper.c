/**
 * _isupper - checks if arg is upper case or not
 * @c: arg to check
 * Return: 1 if isupper else 0
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
