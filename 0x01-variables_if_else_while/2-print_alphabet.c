#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	c = 'a';

	while (c <= 'z'){
		putchar(c);
		c++;
	}
	putchar('\n');
	return(0);
}
