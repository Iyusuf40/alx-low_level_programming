#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	char c;
	c = 'z';
	while (c >= 'a'){
		putchar(c);
		c--;
	}
	putchar('\n');
	return(0);
}
