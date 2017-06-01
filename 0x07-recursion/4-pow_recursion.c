#include "holberton.h"

/**
 * _pow_recursion - Exponentiation done recursively
 * @x: The base
 * @y: The degree the base is raised to
 *
 * Return: The computation
 *
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (x * _pow_recursion(x, y - 1));
}
