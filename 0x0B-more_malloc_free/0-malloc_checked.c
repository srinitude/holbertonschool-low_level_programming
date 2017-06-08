#include "holberton.h"
#include <stdlib.h>

/**
 * malloc_checked - Allocates memory
 * @b: The size of memory to allocate
 *
 * Return: A pointer to new memory
 *
 */

void *malloc_checked(unsigned int b)
{
	void *mem = malloc(b);

	if (mem == NULL)
		exit(98);
	return (mem);
}
