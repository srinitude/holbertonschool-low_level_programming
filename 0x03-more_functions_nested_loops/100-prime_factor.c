#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always success (0)
 *
 */

int main(void)
{
	long int largest_factor = 612852475143;
	long int idx;

	for (idx = 2; idx < largest_factor; idx++)
	{
		if (largest_factor % idx == 0)
		{
			largest_factor = largest_factor / idx;
			continue;
		}
	}
	printf("%li\n", largest_factor);
	return (0);
}
