#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints single-digit numbers separated by commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int number = 48;

	while (number < 58)
	{
		putchar(number);
		if (number != 57)
		{
			putchar(',');
			putchar(32);
		}
		number++;
	}
	putchar('\n');
	return (0);
}
