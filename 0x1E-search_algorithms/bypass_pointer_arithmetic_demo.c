#include <stdio.h>
#include <stddef.h>
/**
 * main - main function - demonstrates bypassing pointer arithmetic
 * Return: 0
 */
int main(void)
{
	int x = 255, *x_address = &x;
	size_t save = (size_t)x_address;

	printf("x is originally %d\n", x);
	save = save + 1; /* 1 mem location above x address */
	printf("converting to 65635.....\n");
	*((unsigned char *)save + 0) = 255;
	printf("now x is %d\n", x);
	printf("converting to 62580.....\n");
	*((unsigned char *)save - 1) = 0;
	printf("now x is %d\n", x);
	printf("converting to 0.....\n");
	*((unsigned char *)save) = 0;
	printf("now x is %d\n", x);

	printf("addresses: ");
	printf("x_address = %p save = %p\n", (void *)x_address, (void *)save);

	printf("using pointer arithmetic x_address + 1...\n");

	printf("addresses: ");
	printf("x_address = %p x_address++ = %p save = %p\n",
			(void *)x_address, (void *)(x_address + 1), (void *)save);

	return (0);
}
