#include "holberton.h"

/**
 * _memcpy - Copy memory from one buffer to another
 * @dest: The memory area where bytes are copied to
 * @src: The memory area where bytes are copied from
 * @n: The number of bytes copied
 *
 * Return: Pointer of the destination buffer
 *
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
