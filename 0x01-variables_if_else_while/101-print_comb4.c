#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Print 3 consecutive digit trios of unique 0-9 combos
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int first_number = '0';
	int second_number = '1';
	int third_number = '2';

	int original_third_start_point = '2';

	int running_second_start_point = '1';
	int running_third_start_point = '2';

	while (first_number <= '7')
	{
		while (second_number <= '8')
		{
			while (third_number <= '9')
			{
				if ((first_number != second_number) != third_number)
				{
					putchar(first_number);
					putchar(second_number);
					putchar(third_number);
					if ((first_number != '7') || (second_number != '8') || (third_number != '9'))
					{
						putchar(',');
						putchar(' ');
					}
				}
				if (third_number == '9')
				{
					running_third_start_point++;
				}
				third_number++;
			}
			if (second_number == '8')
			{
				running_second_start_point++;
			}
			second_number++;
			third_number = running_third_start_point;
		}
		first_number++;
		second_number = running_second_start_point;
		original_third_start_point++;
		third_number = original_third_start_point;
	}
	putchar('\n');
	return (0);
}
