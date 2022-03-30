/**
 * _strlen_recursion - prints a string
 * @s: array
 * Return: i
 */
int _strlen_recursion(char *s)
{
	int i;

	i = 0;

	if (*s != 0)
	{
		i += _strlen_recursion(s + 1) + 1;
	}
	return (i);
}
