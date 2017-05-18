#include "holberton.h"

/**
 * _isdigit - Tests to see if parameter passed is a digit character
 * @c: The argument being passed
 *
 * Return: 1 if the char is a digit, 0 otherwise
 *
 */

int _isdigit(int c)
{
	if ((c >= '0') && (c <= '9'))
	{
		return (1);
	}
	return (0);
}
