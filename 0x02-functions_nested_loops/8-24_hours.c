#include "main.h"
/**
 * jack_bauer - prints minutes of the day
 * Return: void
 */
void jack_bauer(void)
{
	int i;
	int j;
	int k;
	int l;

	i = '0';

	while (i <= '2')
	{
		j = '0';
		while (j <= '9')
		{
			if (i == '2' && j == '4')
				break;
			k = '0';
			while (k <= '5')
			{
				l = '0';
				while (l <= '9')
				{
					_putchar(i);
					_putchar(j);
					_putchar(':');
					_putchar(k);
					_putchar(l);
					_putchar('\n');
					l++;
				} k++;
			} j++;
		} i++;
	}
}
