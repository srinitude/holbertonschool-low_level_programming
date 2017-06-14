#include <stdlib.h>
#include "function_pointers.h"

/**
 * array_iterator - Transform every array memb
 * @array: Array in question
 * @size: Number of members
 * @action: The transform to perform
 *
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;
	for (i = 0; i < size; i++)
		action(array[i]);
}
