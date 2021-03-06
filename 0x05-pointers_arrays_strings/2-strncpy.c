#include "holberton.h"

/**
 * _strncpy - Copy a string
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes to copy from the first string
 *
 * Return: A pointer to the destination string
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int i;
	int original_n = n;

	for (i = 0; src[i] != '\0'; i++)
	{
		if (n > 0)
		{
			dest[i] = src[i];
			n--;
		}
	}

	for (; i  < original_n; i++)
	{
		dest[i] = '\0';
	}
	return (dest);
}
