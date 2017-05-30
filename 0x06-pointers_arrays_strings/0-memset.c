#include "holberton.h"

/**
 * _memset - Fills memory with a constant byte
 * @s: The start of memory to be filled
 * @b: The byte to fill memory with
 * @n: The number of bytes to fill
 *
 * Return: A pointer to the altered memory
 *
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		*(s + i) = b;
	}
	return (s);
}
