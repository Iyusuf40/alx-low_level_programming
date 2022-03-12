#include <stdio.h>
#include <stdlib.h>
/**
 * main - this
 *
 * Return: 0 if
 */
int main(void) /*main*/
{
	char lower;
	char upper;

	lower = 'a';
	upper = 'A';

	while (lower <= 'z')
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 'Z')
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}
