#include "holberton.h"

/**
 * power - Computes exponentiation
 * @base: The base operand
 * @degree: The degree operand
 *
 * Return: The result
 *
 */

unsigned int power(unsigned int base, unsigned int degree)
{
	unsigned int i;
	unsigned int result = 1;

	for (i = 0; i < degree; i++)
		result *= base;
	return (result);
}

/**
 * _strlen - Computes string length
 * @str: The string
 *
 * Return: The length of string
 *
 */

unsigned int _strlen(const char *str)
{
	unsigned int i;

	if (str == NULL)
		return (0);
	for (i = 0; str[i]; i++)
		;
	return (i);
}

/**
 * binary_to_uint - Converts binary to unsigned int
 * @b: The binary number string
 *
 * Return: The unsigned int (which may or may not be 0)
 *
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i, sum = 0, count = 0;
	char current;

	if (b == NULL)
		return (0);
	count = _strlen(b);
	while (*b != '\0')
		b++;
	b--;
	for (i = 0; count > 0; i++, b--)
	{
		current = *b;
		if ((current != '0') && (current != '1'))
			return (0);
		else if (current == '1')
			sum += power(2, i);
		count--;
	}
	return (sum);
}
