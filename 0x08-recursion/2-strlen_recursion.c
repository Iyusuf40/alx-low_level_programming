/**
 * _strlen_recursion - counts chars
 * @s: char to check
 * Return: lenth of str
 */
int _strlen_recursion(char *s)
{
	int i = 0;

	if (*(s + i) == 0)
		return (i);
	i++;
	return (_strlen_recursion(s + i));
}
