#include "holberton.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always Success (0)
 *
 */

int main(void)
{
	long int f0 = 1, f1 = 2, even_sum = f1;
	long int sum;

	while (sum < 4000000)
	{
		sum = f0 + f1;
		f0 = f1;
		f1 = sum;
		if (f1 % 2 == 0)
		{
			even_sum += f1;
		}
	}
	printf("%li\n", even_sum);
	return (0);
}
