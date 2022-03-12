#include <stdio.h>
#include <stdlib.h>
/**
 * main- thid
 *
 * Return: 0 if
 */
int main(void) /*main*/
{
	char c;

	c = 'a';

	while (c <= 'z')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
