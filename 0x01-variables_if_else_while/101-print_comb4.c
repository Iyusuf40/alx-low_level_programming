#include <stdio.h>
#include <stdlib.h>
/**
 *main- does numbers
 *Return: 0 if success
*/
int main(void)
{
	int i;
	int j;
	int k;

	i = '0';

	while (i <= '9')
	{
		j = '1';
		while (j <= '9')
		{
			k = '2';
			while (k <= '9')
			{
				if (i != j && j != k)
				{
					if (j > i && k > j)
					{
						putchar(i);
						putchar(j);
						putchar(k);
					}
				}
				if (((i != '7') || (j != '8') || (k != '9')) && (i != j && j != k) && (j > \
				i && k > j))
				{
					putchar(',');
					putchar(' ');
				}
				k++;
			}
			j++;
		};
		i++;
	};
	putchar('\n');
	return (0);
}

