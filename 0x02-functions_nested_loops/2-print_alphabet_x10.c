#include "holberton.h"

/**
 * main - Entry point
 *
 * Return - Always Success (0)
 */

void print_alphabet_x10(void)
{
	int index;

	for (index = 0; index < 10; index++)
	{
		char letter = 'a';

		while (letter <= 'z')
		{
			_putchar(letter);
			letter++;
		}
		_putchar('\n');
	}
}
