#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main-Program entry point
 *
 * Description: compare 1st and 2nd  number
 * and prin the outcome
 *
 * Return: 0
 */

int main(void)

{
	int n;

	srand(time(0));

	n = rand() - RAND_MAX / 2;

	if (n >  0)
	{
		printf("%d is positive\n", n);
	}
		else if (n < 0)
		{
			printf("%d is negative\n", n);
		}
	else if (n == 0)
		printf("%d is zero\n", n);
	return (0);
}
