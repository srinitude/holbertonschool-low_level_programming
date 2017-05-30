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
	int assigned = 0;
	unsigned int count = 0;
	int i, j;

	for (i = 0; *(s + i) != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				count++;
				assigned = 1;
			}
		}
		if (!assigned)
			return (count);
		assigned = 0;
	}

	return (count);
}
