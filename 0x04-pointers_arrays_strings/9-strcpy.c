#include "holberton.h"

/**
 * _strcpy - Copies one string to another
 * @dest: The destination string
 * @src: The source string
 *
 * Return: A pointer to the destination string
 *
 */

char *_strcpy(char *dest, char *src)
{
	int length = 0;
	int i;

	while (*src)
	{
		length++;
		src++;
	}

	for (i = 0; i < length; i++)
	{
		src--;
	}

	for (i = 0; i < length; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
