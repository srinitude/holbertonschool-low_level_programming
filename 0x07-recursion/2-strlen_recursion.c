#include "holberton.h"

/**
 * _strlen_recursion - Computes length of string recursively
 * @s: The string in question
 *
 * Return: Length of the string
 *
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}
