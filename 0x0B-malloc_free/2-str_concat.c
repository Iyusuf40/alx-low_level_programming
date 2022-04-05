#include <stdlib.h>
/**
 * str_concat- joins string s2 to string s1 on a different address
 * @s1: base string
 * @s2: string to join to s1
 *
 * Return: a pointer to the new string if successful
 */
char *str_concat(char *s1, char *s2)
{
	int len1 = 0, len2 = 0, k = 0, l = 0; /* len are lengths of s1 and s2*/
	char *s;

	if (s1 == 0)
		len1 = 0;
	else
	{
		while (*(s1 + len1) != 0)
			len1++;
	}

	if (s2 == 0)
		len2 = 0;
	else
	{
		while (*(s2 + len2) != 0)
			len2++;
	}

	s = malloc((len1 + len2 + 1) * sizeof(char));
	if (s == 0)
		return (0);
	while (s1 != 0 && *(s1 + k) != 0)
	{
		s[k] = s1[k];
		k++;
	}

	while (s2 != 0 && s2[l] != 0)
	{
		s[k] = s2[l];
		l++;
		k++;
	}
	s[k] = 0;

	return (s);
}
