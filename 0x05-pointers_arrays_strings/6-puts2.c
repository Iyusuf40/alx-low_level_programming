#include "main.h"

/**
 * puts2- prints alternate chars
 * @str: par
 */
void puts2(char *str)
{
	int count;
	char *holder;

	count = 0;
	holder = str

	while (*holder != '\0')
	{
		count++;
		holder++;
	}

	while (*str != '\0')
	{
		if {count % 2 == 0}
		{
			_putchar(*(str));
			str += 2;
			count /= 2;
		}
	}
	_putchar('\n');
}
