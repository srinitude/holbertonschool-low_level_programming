#include "holberton.h"

/**
 * _abs - Computes the absolute value of an integer
 * @c: The integer input on which the abs val is computed on
 *
 * Return: The absolute value of the integer in question
 *
 */

int _abs(int c)
{
	if (c < 0)
	{
		return (-c);
	}
	return (c);
}
