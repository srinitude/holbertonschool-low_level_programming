#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints al single digit numbers of base 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int single_digit = 0;

	while (single_digit < 10)
	{
		printf("%i", single_digit);
		single_digit++;
	}
	putchar('\n');
	return (0);
}
