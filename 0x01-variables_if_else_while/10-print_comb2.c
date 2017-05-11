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
	int first_number = '0';
	int second_number = '0';

	while (first_number <= '9')
	{
		while (second_number <= '9')
		{
			putchar(first_number);
			putchar(second_number);
			if ((first_number != '9') || (second_number != '9'))
			{
				putchar(',');
				putchar(' ');
			}
			second_number++;
		}
		first_number++;
		second_number = '0';
	}
	putchar('\n');
	return (0);
}
