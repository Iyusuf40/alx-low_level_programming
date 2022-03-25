#include <stdio.h>
#include <stdlib.h>

void print_array(int *a, int n)
{
    int i;

    i = 0;
    while (i < n)
    {
        if (i != 0)
        {
            printf(", ");
        }
        printf("%d", a[i]);
        i++;
    }
    printf("\n");
}

/**
 * reverse_array- rev an array of int
 * @a: 1 par 
 * @n: sec par
 */
void reverse_array(int *a, int n)
{
    int i, j, k;
    int w[n];
    int v[n];

    i = n - 1;
    j = k = 0;
    while (k < n / 2)
    {
      w[j] = *(a + j);
      v[j] = *(a + i);
      *(a + j) = v[j];
      *(a + i) = w[j];
      j++;
      i--;
      k++;
    }
    printf("\n");
}

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
    int a[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 98, 1024, 1337};

    print_array(a, sizeof(a) / sizeof(int));
    reverse_array(a, sizeof(a) / sizeof(int));
    print_array(a, sizeof(a) / sizeof(int));
    return (0);
}
