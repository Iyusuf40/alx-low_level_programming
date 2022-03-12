#include <stdio.h>
#include <stdlib.h>
/**
 * main- does this
 *
 * Return: 0 if code
 */
int main(void) /*main*/
{
	char c;

	c = 'z';

	while (c >= 'a')
	{
		putchar(c);
		c--;
	}
	putchar('\n');
	return (0);
}
