#include "holberton.h"

/**
 * cap_string - Captalizes all words in a string
 * @s: The string in question
 *
 * Return: Pointer to the new capitalized string
 *
 */

char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			switch (s[i - 1])
			{
			case ' ':
			case '\t':
			case '\n':
			case ',':
			case ';':
			case '.':
			case '!':
			case '?':
			case '"':
			case '(':
			case ')':
			case '{':
			case '}':
				s[i] -= 32;
				break;
			default:
				break;
			}
		}
	}
	return (s);
}
