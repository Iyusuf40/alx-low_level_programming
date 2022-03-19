#include "main.h"

/**
 * print_number - prints char numbers
 * @n: number to print
 */
void print_number(int n)
{
        int i;

        i = 9;

        if (n < 0)
        {
                n = -n;
                putchar('-');
        }

        if (n >= 10 && n <= 99)
        {
                while (i > 0)
                {
                        if ((n / 10) == i)
                        {
                                putchar((n / 10) + '0');
                                putchar((n % 10) + '0');
                        }
                        i--;
                }
        }

        else if (n >= 100 && n <= 999)
        {
                putchar((n / 100) + '0');
                putchar(((n / 10) % 10) + '0');
                putchar(((n % 100) % 10) + '0');
        }

        else if (n >= 1000 && n <= 9999)
        {
                putchar((n / 1000) + '0');
                putchar(((n / 100) % 10) + '0');
                putchar(((n / 10) % 10) + '0');
                putchar(((n % 1000) % 10) + '0');
        }

        else
                putchar(n + '0');
        putchar('\n');
}

