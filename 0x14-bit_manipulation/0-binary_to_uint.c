#include "main.h"
/**
 * print_binary - prints bin number
 *
 * @c: number to print
 */
void print_binary(unsigned long int c)
{
	/* len saves the length of the binary*/
	/* len starts at -1 because when performing binary shift there is room for 1*/
	int len = -1, i = 0;
	/* copy saves the integer on which the operation is to be carried on*/
	unsigned long int copy = c;

	/* handle special case, where c is 0*/
	if (c == 0)
	{
		_putchar('0');
		return;
	}
	/* compute lenght of binary and save as len, len = lenght - 1*/
	while (c)
	{
		c = c >> 1;
		len++;
	}
	/**
	* loop over copy len number of times
	* compare 1st bit of copy with 1 achieved by shifting 1 to left len times
	* if 1 print 1 else 0
	* shift copy to left so as to compare second bit with 1
	* repeat until last bit of copy
	*/
	while (i <= len)
	{
		(copy & (1 << len)) ? _putchar('1') : _putchar('0');
		copy = copy << 1;
		i++;
	}
}
