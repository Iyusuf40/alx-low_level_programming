
/**
* char_checker_forward - checks characters of the sring from index 0
* @s: address of string to check
*
* Return: returns the charcter
*/
int char_checker_forward(char *s)
{
	char *i = s;

	if (*i != 0)
	{
		return (*i);
	}

	return (*i);
}

/**
* len - finds the length of the string passed as arg
* @s: string address
*
* Return: returns address of the last char befor nul
*/
char *len(char *s)
{
	if (*s != 0)
		return (len(++s));

	return (s);
}

/**
* char_checker_backward - checks characters of the sring from index -1
* @s: string address passed as arg
* @v: to hold address of last char of string before nul
* Return: char
*/
int char_checker_backward(char *s, char *v)
{
	char *i = s;

	if (i != v)
	{
		return (char_checker_backward(++i, v));
	}
	return (*(i - 1));
}

/**
* palindrome_check - checks characters of the sring from index -1
* @s: string address passed as arg
* @x: to hold address of last char of string before nul
* Return: 0 or 1
*/
int palindrome_check(char *s, char *x)
{
	char *i = s;
	char *j = s;
	char *k = x;

	if (k <= i)
		return (1);

	if (char_checker_forward(i) != char_checker_backward(j, k))
		return (0);

	if (char_checker_forward(i) == char_checker_backward(j, k))
	{
		return (palindrome_check(i + 1, k - 1));
	}

	return (1);
}

/**
* is_palindrome - checks if string is pallindrome
* @s: string to check
*
* Return: 1 if true and 0 if false
*/
int is_palindrome(char *s)
{
	int res = 0;
	char *i = s;
	char *k = s;
	char *l = s;

	k = len(l);

	res = palindrome_check(i, k);

	return (res);
}
