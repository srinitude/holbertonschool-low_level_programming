#include "holberton.h"
#include <stdlib.h>

/**
 * create_array - Create array of chars
 * @size: Size of the array
 * @c: The char to initialize with
 *
 * Return: Pointer to array or null pointer
 *
 */

char *create_array(unsigned int size, char c)
{
	if (size == 0)
		return (NULL);
	char *arr = malloc(sizeof(c) * size);
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		arr[i] = c;
	}
	return (arr);
}
