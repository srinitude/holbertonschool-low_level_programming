#include "holberton.h"

/**
 * rev_string - Reverses the string in place
 * @s: The string to reverse
 *
 */

void rev_string(char *s)
{
	char temp;
	int length = 0;
	int mid, i;

	while (*s != '\0')
	{
		s++;
		length++;
	}
	length--;
	s--;
	mid = length / 2;

	for (i = 0; i < length; i++)
	{
		s--;
	}

	for (i = 0; i <= mid; i++)
	{
		temp = s[i];
		s[i] = s[length - i];
		s[length - i] = temp;
	}
}
