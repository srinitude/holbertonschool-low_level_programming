#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 *
 */

int main(void)
{
	long int number = 612852475143;
	long int factor = 1;
	long int idx;

	for (idx = 2; idx < number; idx++)
	{
		if ((number % idx == 0) && (idx > factor))
		{
			factor = idx;
		}
	}
	printf("%li", factor);
	return (0);
}
