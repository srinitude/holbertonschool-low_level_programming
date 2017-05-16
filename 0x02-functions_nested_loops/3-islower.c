#include "holberton.h"

/**
 * _islower - Test to c if lowercase or not
 * @c: The character to evaluate
 *
 * Return: On Success 1
 * On error, 0 is returned
 *
 */

int _islower(int c)
{
	if ((c >= 'a') && (c <= 'z'))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
