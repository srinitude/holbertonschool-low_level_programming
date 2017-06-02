#include "holberton.h"

/**
 * sqrt_calc - Square root-calculating machinery
 * @n: Number in question
 * @root: Square root attempt
 *
 * Return: The natural square root or -1
 */

int sqrt_calc(int n, int root)
{
	int square = root * root;
	int test_square;

	if (square == n)
		return (root);
	else if (square < n)
	{
		test_square = (root + 1) * (root + 1);
		if (test_square > n)
			return (0);
		return (0 + sqrt_calc(n, root + 1));
	}
	else
	{
		test_square =  (root - 1) * (root - 1);
		if (test_square < n)
			return (0);
		return (0 + sqrt_calc(n, root - 1));
	}
}

/**
 * _sqrt_recursion - Determines natural square root of a number
 * @n: The number in question
 *
 * Return: The square root (but -1 if number doesn't have an int)
 *
 */

int _sqrt_recursion(int n)
{
	int sqrt = (sqrt_calc(n, 2));

	if (sqrt)
		return (sqrt);
	return (-1);
}
