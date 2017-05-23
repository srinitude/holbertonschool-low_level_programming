#include "holberton.h"

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

	while (*s != '\0')
	{
		s++;
	}
	s--;
	
	new_letter = *s;

	while (*beginning != '\0')
	{
		*s = new_letter;
		*beginning = old_letter;
		s--;
		old_letter = *s;
		beginning++;
		new_letter = *beginning;
	}
}
