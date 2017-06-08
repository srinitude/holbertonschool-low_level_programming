#include <stdlib.h>
#include "holberton.h"

/**
 * _realloc - Reallocates a memory block
 * @ptr: The old, allocated memory
 * @old_size: Original size of the pointer
 * @new_size: New size of the memory block
 *
 * Return: Pointer with new memory or NULL
 *
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned int *new_ptr;
	unsigned int i;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		if (new_ptr == NULL)
			return (NULL);
		return (new_ptr);
	}
	if (new_size == old_size)
		return (ptr);
	if ((new_size == 0) && (ptr != NULL))
	{
		free(ptr);
		return (NULL);
	}
	new_ptr = malloc(sizeof(unsigned int) * new_size);
	for (i = 0; i < old_size; i++)
		new_ptr[i] = *((unsigned int *)ptr + i);
	free(ptr);
	return ((void *)new_ptr);
}
