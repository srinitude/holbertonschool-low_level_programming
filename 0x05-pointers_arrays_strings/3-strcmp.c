#include "holberton.h"

/**
 * _strcmp - Compares two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: An int that will indicate which string is greater
 *
 */

int _strcmp(char *s1, char *s2)
{
	int ascii_difference, i;

	for (i = 0; s1[i] != '\0' && s2[i] != '\0'; i++)
	{
		ascii_difference = s1[i] - s2[i];
		if (ascii_difference != 0)
		{
			return (ascii_difference);
		}
	}
	return (0);
}
