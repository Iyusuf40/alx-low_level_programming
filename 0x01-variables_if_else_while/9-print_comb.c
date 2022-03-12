#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	int i;
	i = 0;
	while (i < 10){
		putchar(i);
		putchar(", ");
		i++;
	}
	putchar("$\n");
	return(0);
}
