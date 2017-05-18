#include "holberton.h"

/**
 * print_diagonal - Print backslash with spaces preceding
 * @n: Number of spaces before the backslash
 *
 */

void print_diagonal(int n)
{
	int i, j;

	if (n <= 0)
	{
		_putchar('\n');
		return;
	}
	for (i = 1; i <= n; i++)
	{
		for (j = 0; j < i; j++)
		{
			int last_idx = i - 1;

			if (j == last_idx)
			{
				_putchar('\\');
			}
			else
			{
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
