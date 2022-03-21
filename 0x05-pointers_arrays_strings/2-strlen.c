#include "main.h"

/**
 * _strlem - returns lentgh of sting
 * @s: par str
 */
int _strlen(char *s)
{
	int i;

	i = 1;
	while (*s != '\0')
	{
		*s++;
		i++;
	}
	return (i);
}
