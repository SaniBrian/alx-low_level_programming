#include <stdlib.h>
#include <time.h>
<<<<<<< HEAD
/* more headers goes there */

/* betty style doc for function main goes there */
=======
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
>>>>>>> cdda3155519b29505e9e7a568d3b03ea67183022
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
<<<<<<< HEAD
	  
		printf("is positive");
	 
	else if (n == 0)
	  
	   	printf("is zero");
	  
	else
	   prrintf("is negative\n");
=======
	{
		printf("%d is positive\n", n);
	}
	if (n == 0)
	{
		printf("%d is zero\n", n);
	}
	if (n < 0)
	{
		printf("%d is negative\n", n);
	}
>>>>>>> cdda3155519b29505e9e7a568d3b03ea67183022
	return (0);
}
