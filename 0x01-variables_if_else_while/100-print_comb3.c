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

	i = '0';

	while (i <= '9')
	{
		j = '1';
		while (j <= '9')
		{
			if (i != j)
			{
				if (j > i)
				{
					putchar(i);
					putchar(j);
				}
			}
			if ((i != '8') || (j != '9'))
			{
				if (i != j)
				{
					if (j > i)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
			j++;
		};
		i++;
	};
	putchar('\n');
	return (0);
}
