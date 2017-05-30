#include "holberton.h"

/**
 * _strspn - # of contiguous bytes in a string containing certain characters
 * @s: The string in question
 * @accept: The characters in question
 *
 * Return: The number of bytes
 *
 */

unsigned int _strspn(char *s, char *accept)
{
	int assign = 0;
	unsigned int count = 0;
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				assign = 1;
			}
		}
		if (!assign)
			return (count);
		assign = 0;
	}

	return (count);
}
