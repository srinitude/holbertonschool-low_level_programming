#include "holberton.h"
#include <stdio.h>

/**
 * print_to_98 - Prints all of the numbers to 98 (increasing or decreasing)
 * @n: The integer to start printing from
 *
 */

void print_to_98(int n)
{
	if (n < 98)
	{
		while (n <= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n++;
		}
		printf("\n");
	}
	else if (n > 98)
	{
		while (n >= 98)
		{
			printf("%i", n);
			if (n != 98)
			{
				printf(",");
				printf(" ");
			}
			n--;
		}
		printf("\n");
	}
	else
	{
		printf("%i", n);
		printf("\n");
	}
}
