/**
 * reverse_array- rev an array of int
 * @a: 1 par
 * @n: sec par
 */
void reverse_array(int *a, int n)
{
	int i;

	i = n - 1;
	while (i >= 0)
	{
		if (i != n - 1)
		{
			printf(", ");
		}
		printf("%d", a[i]);
		i--;
	}
	printf("\n");
}
