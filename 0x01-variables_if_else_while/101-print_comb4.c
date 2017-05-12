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
	int hundreds;
	int tens;
	int ones;

	for (hundreds = '0'; hundreds <= '7'; hundreds++)
	{
		for (tens = hundreds + 1; tens <= '8'; tens++)
		{
			for (ones = tens + 1; ones <= '9'; ones++)
			{
				if (((hundreds != tens) != ones) && ((hundreds < tens) < ones))
				{
					putchar(hundreds);
					putchar(tens);
					putchar(ones);
				}
				if (hundreds != '7' || tens != '8' || ones != '9')
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
