#include "holberton.h"

/**
 * prime_number_calc - Machinery behind is_prime_number
 * @n: Number in question
 * @divisor: Dvisior
 *
 * Return: 0 if prime, original # if not
 */

int prime_number_calc(int n, int divisor)
{
	if (n == 2)
		return (0);
	if (n == 0)
		return (100);
	if (n == 1 || n == -1)
                return (n);
	if (n % divisor == 0)
		return (n);
	if (divisor < (n / 2))
		divisor += 1;
	if (divisor >= (n / 2))
		return (0);
	return (0 + prime_number_calc(n, divisor));
}

/**
 * is_prime_number - Recursively calculate if number is prime
 * @n: The number in question
 *
 * Return: 0 for false, 1 for true
 *
 */

int is_prime_number(int n)
{
	int is_not_prime = prime_number_calc(n, 2);

	if (is_not_prime != 0)
		return (0);
	return (1);
}
