#include "holberton.h"

/**
 * _strncat - Concatenating string upto 'n' bytes
 * @dest: The destination string
 * @src: The source string
 * @n: The number of bytes
 *
 * Return: Pointer to concatenated string
 *
 */

char *_strncat(char *dest, char *src, int n)
{
	int i, j;
	int original_n = n;

	for (i = 0; dest[i] != '\0'; i++)
	{
	}
	for (j = 0; src[j] != '\0'; j++)
	{
		if (n > 0)
		{
			dest[i] = src[j];
			i++;
			n--;
		}
	}
	if (j + 1 < original_n)
	{
		dest[i] = '\0';
	}
	return (dest);
}
