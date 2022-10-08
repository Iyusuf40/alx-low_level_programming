#include <stdio.h>
#include <stddef.h>
/**
 * main - main function - demonstrates bypassing pointer arithmetic
 * Return: 0
 */
int main(void)
{
	int x = 255, *x_address = &x, *p = &x;
	size_t save = (size_t)p;

	printf("x is originally %d\n", x);
	save = save + 1;
	p = (int *)save;
	printf("converting to 65635.....\n");
	*((unsigned char *)save + 0) = 255;
	printf("now x is %d\n", x);
	printf("converting to 62580.....\n");
	*((char *)save - 1) = 0;
	printf("now x is %d\n", x);
	printf("converting to 0.....\n");
	*((char *)save) = 0;
	printf("now x is %d\n", x);

	printf("addresses: ");
	printf("x_address = %lu p = %lu save = %lu\n", (size_t)x_address,
			(size_t)p, save);
	printf("using pointer arithmetic x_address + 1...\n");
	printf("addresses: ");
	printf("x_address = %lu x_address++ = %lu p = %lu save = %lu\n",
			(size_t)x_address, (size_t)(x_address + 1), (size_t)p, save);

	return (0);
}
