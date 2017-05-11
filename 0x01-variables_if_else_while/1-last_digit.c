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
	if (last_digit > 5)
	{
		printf("Last digit of %i is %i and is greater than 5", n, last_digit);
	}
	else if (last_digit == 0)
	{
		printf("Last digit of %i is %i and is 0", n, last_digit);
	}
	else
	{
		printf("Last digit of %i is %i and is less than 6 and not 0", n, last_digit);
	}
	return (0);
}
