#include "holberton.h"

/**
 * string_toupper - Chnages all lowercase letters to uppercase
 * @s: The string in question
 *
 * Return: A pointer to the transformed string
 *
 */

char *string_toupper(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			s[i] -= 32;
		}
	}
	return (s);
}
