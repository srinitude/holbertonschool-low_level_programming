#include "holberton.h"

/**
 * print_triangle - Prints out a right triangle comprised of hashtags
 * @size: Height/width of the right triangle
 *
 */

void print_triangle(int size)
{
	int i, j;
	int spaces = size - 1;

	if (size <= 0)
	{
		_putchar('\n');
		return;
	}

	for (i = 0; i < size; i++)
	{
		for (j = 0; j < size; j++)
		{
			if (j < spaces)
			{
				_putchar(' ');
			}
			else
			{
				_putchar('#');
			}
		}
		spaces--;
		_putchar('\n');
	}
}
