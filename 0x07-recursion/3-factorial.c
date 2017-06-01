#include "holberton.h"

/**
 * factorial - Computes factorial recursively
 * @n: The int to take factorial of
 *
 * Return: The total factorial
 *
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);
	if (n == 0)
		return (1);
	return (n * factorial(n - 1));
}
