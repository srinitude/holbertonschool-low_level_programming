#include "holberton.h"

/**
 * times_table - Prints the times table up to 9x9
 *
 */

void times_table(void)
{
	int first, second;

	for (first = 0; first < 10; first++)
	{
		for (second = 0; second < 10; second++)
		{
			int product = first * second;
			int product_tens_place = product / 10;
			int product_ones_place = product % 10;
			int next_second = second + 1;
			int next_product = first * next_second;
			int next_product_tens_place = next_product / 10;

			if (product_tens_place != 0)
			{
				_putchar('0' + product_tens_place);
			}
			_putchar('0' + product_ones_place);
			if (second != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((product_tens_place == 0) && (next_product_tens_place == 0) && (second != 9))
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
