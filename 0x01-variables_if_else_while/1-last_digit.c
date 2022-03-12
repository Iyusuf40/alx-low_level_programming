#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main- does what it does
 *
 * Return: 0 if success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n[8] > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n,n[8]);
	else if (n[8] == 0)
		printf("Last digit of %d is %d and is 0\n", n,n[8]);
	else if (n[8] < 6 && n[8] != 0)
		printf("Lasr digit of %d is %d and is less than 6 and not 0\n", n,n[8]);
	return (0);
}
