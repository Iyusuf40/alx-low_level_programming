/**
 * reverse_array- rev an array of int
 * @a: 1 par
 * @n: sec par
 */
void reverse_array(int *a, int n)
{
	int i, j, k;
	int w[100];
	int v[100];

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
