#include "main.h"

/**
 * puts2- prints alternate chars
 * @str: par
 */
void puts2(char *str)
{
	int count, i;
	char *holder;

	count = 0;
	i = 0;
	holder = str;

	while (*holder != '\0')
	{
		count++;
		holder++;
	}

	while (i < ((count / 2) + 1))
	{
		if (*str == '\0')
			break;
		if (*str == str[count])
			break;
		_putchar(*str);
		str += 2;
		i++;
	}
	_putchar('\n');
}
