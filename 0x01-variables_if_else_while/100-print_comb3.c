#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints 0-9 without repeating numbers and unique combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number = '0';
	int second_number = '1';
	int second_start_point = '1';

	while (first_number <= '9')
	{
		while (second_number <= '9')
		{
			if (first_number != second_number)
			{
				putchar(first_number);
				putchar(second_number);
				if ((first_number != '8') || (second_number != '9'))
				{
					putchar(',');
					putchar(' ');
				}
			}
			if (second_number == '9')
			{
				second_start_point++;
			}
			second_number++;
		}
		first_number++;
		second_number = second_start_point;
	}
	putchar('\n');
	return (0);
}
