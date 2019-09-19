#include <stdlib.h>
#include <time.h>

/* more headers goes there */
#include <stdio.h>

/* betty style doc for function main goes there */
/**
  * main - 0. Positive anything is better than negative nothing
  * Print if n is negative, positive or zero.
  * Return: 0
  */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
/* your code goes there */
	if (n < 0)
	{
		printf("%d", n);
		printf(" is negative\n");
	}
	if (n > 0)
	{
		printf("%d", n);
		printf(" is positive\n");
	}
	if (n == 0)
	{
		printf("%d", n);
		printf(" is zero\n");
	}



	return (0);
}
