#include "holberton.h"

/**
 * _isupper - Tests to see if input is an uppercase letter char
 * @c: The int/character passed
 *
 * Return: 1 if the char is uppercase letter or 0 if not
 *
 */

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}
	return (0);
}
