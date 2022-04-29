#include "main.h"
/**
 * get_endianness - checks system endianness
 * Return: 0 or 1
 */
int get_endianness(void)
{
	int a = 257;

	return (a  & 1);
}
