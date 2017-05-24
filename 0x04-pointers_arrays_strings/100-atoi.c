#include "holberton.h"

/**
 * power - Computes exponentiation
 * @base: The base number
 * @degree: Degree of exponentiation
 *
 * Return: The result
 *
 */

int power(int base, int degree)
{
	int i;
	int number = 1;

	for (i = 0; i < degree; i++)
	{
		number *= base;
	}
	return (number);
}

/**
 * _atoi - Converts text to integer
 * @s: The string in question
 *
 * Return: The integer
 *
 */

int _atoi(char *s)
{
	int result = 0;
	int negative_signs = 0;
	int places = 0;
	int start_of_number = -1;
	int i, end_of_number;

	for (i = 0; s[i]; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			places++;
			if (!(s[i + 1] >= '0' && s[i + 1] <= '9'))
				break;
			if (start_of_number >= 0)
				continue;
			else
				start_of_number = i;
		}
		if (s[i] == '-')
			negative_signs++;
	}
	end_of_number = start_of_number + places;
	for (i = start_of_number; i < end_of_number; i++)
	{
		result -= ((s[i] - 48) * power(10, places - 1));
		places--;
	}
	if (negative_signs % 2)
		return (result);
	return (-result);
}
