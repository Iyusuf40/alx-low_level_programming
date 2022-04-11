#ifndef HEADER
#define HEADER
int val(int x)
{
	if (x < 0)
		return (-x);
	return (x);
}
#define ABS(x) val(x)

#endif
