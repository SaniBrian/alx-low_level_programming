#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	printf("Last digit of %d is %d ", n, abs(n % 10));
	if (n > 5)
	{
		printf("and is greater than 5\n");
	}
	if (n == 0)
	{
		printf("and is 0\n");
	}
	if (n < 6 && n != 0)
		printf("and is less than and not 0\n");
	return (0);
}
