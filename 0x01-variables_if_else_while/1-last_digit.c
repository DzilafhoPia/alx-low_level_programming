#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/* more headers goes there */

/* betty style doc for function main goes there */
/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */
int main(void)
{
	int n, lastd;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	lastd = n % 10;

	if (lastd > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, lastd);
	else if (lastd == 0)
		printf("Last digit of %d is %d and is 0\n", n, lastd);
	else if (lastd < 6)
		printf("Last digit of %d is %d less than 6 \n", n, lastd);
	return (0);
}
