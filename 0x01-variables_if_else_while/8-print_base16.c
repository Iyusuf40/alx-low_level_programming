#include <stdio.h>
#include <stdlib.h>
/**
 * main- does what it does
 *
 * Return: 0 if
 */
int main(void) /*main*/
{
	int i;
	int c;

	i = 48;
	c = 97;

	while (i < 58)
	{
		putchar(i);
		i++;
	}
	while (c < 103)
	{
		putchar(c);
		c++;
	}
	putchar(10);
	return (0);
}
