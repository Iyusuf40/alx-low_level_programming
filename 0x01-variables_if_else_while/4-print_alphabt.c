#include <stdio.h>
#include <stdlib.h>
/**
 * main - does
 *
 * Return: 0 if
 */
int main(void) /*main function*/
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		if (c != 'e' && c != 'q')
		{
			putchar(c);
		}
		c++;
	}
	putchar('\n');
	return (0);
}
