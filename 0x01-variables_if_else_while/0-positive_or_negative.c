#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
Here is the code that determines whether
a number is positive, zero, or negative.
Program should return zero
 */

int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n < 0)
	{
		printf("%i is negative\n", n);
	}
	else if (n > 0)
	{
		printf("%i is positive\n", n);
	}
	else
	{
		printf("%i is zero\n", n);
	}
	return (0);
}