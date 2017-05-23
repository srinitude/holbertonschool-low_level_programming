#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - Reverse a string
 * @s: The string to reverse
 *
 */

void rev_string(char *s)
{
	char *beginning = s;
	char old_letter = *s;
	char new_letter;
	int old_length = 0;
	int length;

	while (*s != '\0')
	{
		s++;
		old_length++;
	}
	s--;
	old_length--;
	length = old_length;

	new_letter = *s;

	while (*beginning != '\0')
	{
		*beginning = new_letter;
		*s = old_letter;
		s--;
		beginning++;
		length--;
		if (length >= (old_length / 2))
		{
			new_letter = *s;
			old_letter = *beginning;
		}
		else
		{
			new_letter = *beginning;
			old_letter = *s;
		}
	}
}
