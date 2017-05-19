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
	long int idx, largest_factor;

	for (idx = 3; idx < number; idx++)
	{
		if (number % idx == 0)
		{
			largest_factor = number / idx;
			break;
		}
	}
	printf("%li\n", largest_factor);
	return (0);
}
