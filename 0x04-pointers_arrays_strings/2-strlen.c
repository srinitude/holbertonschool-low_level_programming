#include "holberton.h"

/**
 * _strlen - Computes length of a string
 * @s: The string in question
 *
 * Return: The length of said string
 *
 */

int _strlen(char *s)
{
	int len = 0;

	while (*s)
	{
		len++;
		s++;
	}

	return (len);
}
