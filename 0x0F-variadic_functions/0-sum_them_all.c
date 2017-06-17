#include "variadic_functions.h"

/**
 * sum_them_all - Compute sum of parameters
 * @n: Number of parameters
 *
 * Return: The sum of all of the parameters
 *
 */

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	unsigned int sum = 0;
	va_list args;

	if (n == 0)
		return (sum);
	va_start(args, n);
	for (i = 0; i < n; i++)
		sum += va_arg(args, unsigned int);
	va_end(args);
	return (sum);
}
