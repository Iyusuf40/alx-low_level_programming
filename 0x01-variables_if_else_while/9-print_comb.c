#include <stdio.h>
#include <stdlib.h>
/**
 * main- does this
 *
 * Return: 0 if the
 */
int main(void) /*main*/
{
	int i;

	i = 48;

	while (i < 58)
	{
		putchar(i);
		if (i != 57)
		{
			putchar(44);
			putchar(32);
		}
		i++;
	}
	putchar(10);
	return (0);
}
