#include "holberton.h"

/**
 * _strlen - Computes length of a string
 * @s: The string in question
 *
 * Return: The length of the string
 */

int _strlen(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen(s + 1));
}

/**
 * palindrome_checker - Palindrome computation
 * @beginning: The character to compare to end
 * @end: The character to compare to beginning
 * @s: The string in question
 *
 * Return: 1 if palindrome, 0 if not
 */

int palindrome_checker(int beginning, int end, char *s)
{
	if (beginning >= end)
		return (1);
	if (s[beginning] != s[end])
		return (0);
	else
		return (palindrome_checker(beginning + 1, end - 1, s));
}

/**
 * is_palindrome - Sees if a string is a palindrome
 * @s: The string in question
 *
 * Return: 1 if palindrome, 0 if not
 */

int is_palindrome(char *s)
{
	int last_index = _strlen(s) - 1;

	return (palindrome_checker(0, last_index, s));
}
