#include "holberton.h"

/**
 * more_numbers - Print 0-14 ten times
 *
 */

void more_numbers(void)
{
	int nums[15] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};
	int n, i;

	for (n = 0; n < 10; n++)
	{
		for (i = 0; i < 15; i++)
		{
			int num = nums[i];
			int tens = num / 10;
			int ones = num % 10;

			if (tens != 0)
			{
				_putchar('0' + tens);
			}
			_putchar('0' + ones);
		}
		_putchar('\n');
	}
}
