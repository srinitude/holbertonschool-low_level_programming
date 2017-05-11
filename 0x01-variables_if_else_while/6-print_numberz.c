#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints consecutive base 10 ints under 10
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		number++;
	}
	putchar('\n');
	return (0);
}
