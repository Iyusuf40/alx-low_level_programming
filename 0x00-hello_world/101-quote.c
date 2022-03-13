#include <stdio.h>
#include <stdlib.h>
/**
 * main- does printing without printf nor puts
 *
 * Return: 1 to caller
 */
int main(void)
{
	fwrite("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n",
								59, 1, stderr);
	return (1);
}
