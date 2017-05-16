#include "holberton.h"

/**
 * apply_formatting - Applies commas/spaces depending on numbers
 * @ph: Hundreds place of number on times table
 * @pt: Tens place of number on times table
 * @po: Ones place of number on times table
 * @nh: Hundreds place of the 'next' number on times table
 * @nt: Tens place of the 'next' number on times table
 * @s: Index of the number on the 'x' axis
 * @n: The number to create the table from
 */

void apply_formatting(int ph, int pt, int po, int nh, int nt, int s, int n)
{
	if (ph != 0)
	{
		_putchar('0' + ph);
	}

	if ((pt != 0) || ((ph != 0) && (pt == 0)))
	{
		_putchar('0' + pt);
	}
	_putchar('0' + po);
	if (s != n)
	{
		_putchar(',');
		_putchar(' ');
	}
	if ((pt == 0) && (nt == 0))
	{
		if (s != n)
		{
			_putchar(' ');
			_putchar(' ');
		}
	}
	if ((pt == 0) && (nt > 0))
	{
		if (s != n)
			_putchar(' ');
	}
	if ((pt > 0) && (nh == 0))
	{
		if (s != n)
			_putchar(' ');
	}
	if (((ph > 0) && (pt == 0)) && ((nt == 1) || (nt == 2)))
	{
		if (s != n)
			_putchar('\b');
	}
}

/**
 * print_times_table - Prints times table for a specific integer
 * @n: Specific number that times table is printed for
 *
 */

void print_times_table(int n)
{
	int first, second, pt, po;

	if ((n < 0) || (n > 15))
	{
		_putchar('\n');
		return;
	}
	for (first = 0; first <= n; first++)
	{
		for (second = 0; second <= n; second++)
		{
			int s = second;
			int product = first * second;
			int ph = product / 100;
			int hundreds_remainder = product % 100;

			int next_second = second + 1;
			int next_product = first * next_second;

			int nh = next_product / 100;
			int next_hundreds_remainder = next_product % 100;
			int nt = next_hundreds_remainder / 10;

			if (hundreds_remainder < 10)
			{
				pt = 0;
				po = hundreds_remainder;
			}
			else
			{
				pt = hundreds_remainder / 10;
				po = hundreds_remainder % 10;
			}

			apply_formatting(ph, pt, po, nh, nt, s, n);
		}
		_putchar('\n');
	}
}
