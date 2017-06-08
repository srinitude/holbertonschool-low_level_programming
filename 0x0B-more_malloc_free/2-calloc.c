#include <stdlib.h>
#include "holberton.h"

/**
 * _calloc - Returns memory for an array
 * @nmemb: Number of members
 * @size: Size of each element
 *
 * Return: Pointer to the array or NULL
 *
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;
	unsigned int i;
	
	if ((nmemb == 0) || (size == 0))
		return (NULL);
	arr = malloc(sizeof(size) * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		*((int *)arr + i) = 0;
	return (arr);
}
