#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints 00-99 separated by commas and spaces
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number = 48;
	int second_number = 48;

	while (first_number < 58)
	{
		while (second_number < 58)
		{
			putchar(first_number);
			putchar(second_number);
			if ((first_number != 57) && (second_number != 57))
			{
				putchar(',');
				putchar(32);
			}
			second_number++;
		}
		first_number++;
	}
	putchar('\n');
	return (0);
}
