#include <stdio.h>
#include <stdlib.h>
/**
 * main- does what it does
 *
 * Return : 0 if
 */
int main(void) /*main*/
{
	int i;
	char c;

	i = 0;
	c = 'z';

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	while (c <= 'f')
	{
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
