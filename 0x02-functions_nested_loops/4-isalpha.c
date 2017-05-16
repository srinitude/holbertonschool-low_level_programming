#include "holberton.h"

/**
 * _isalpha - Test to see if character is a letter or not
 * @c: The character to evaluate
 *
 * Return: On success 1.
 * On error, 0 is returned
 */

int _isalpha(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
