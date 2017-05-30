#include "holberton.h"
#include <stddef.h>

/**
 * _strchr - Locates first occurrence of a char within a string
 * @s: The string in question
 * @c: The character in question
 *
 * Return: Pointer to the first occurrence
 *
 */

char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		if (s[i] == c)
		{
			return (s + i);
		}
	}

	return (NULL);
}
