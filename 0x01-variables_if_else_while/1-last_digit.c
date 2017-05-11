#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Description - Here is the code that determines whether
 * a number is positive, zero, or negative.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int n;
	int last_digit;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	last_digit = n % 10;
	printf("Last digit of %i is %i ", n, last_digit);
	if (last_digit > 5)
	{
		printf("and is greater than 5");
	}
	else if (last_digit == 0)
	{
		printf("and is 0");
	}
	else
	{
		printf("and is less than 6 and not 0");
	}
	return (0);
}
