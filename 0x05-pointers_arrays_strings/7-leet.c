#include "holberton.h"

/**
 * leet - Bruh
 * @s: 7h3 s7ing
 *
 * Return: P0in73r 70 7h3 n3w s7ring
 *
 */

char *leet(char *s)
{
	int i, j;
	char reg[] = "aAeEoOtTlL";
	char leet[] = "4433007711";

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; reg[j] != '\0'; j++)
		{
			if (s[i] == reg[j])
			{
				s[i] = leet[j];
			}
		}
	}
	return (s);
}
