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
	int *arr;
	unsigned int i;

	arr = malloc(sizeof(size) * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = 0;
	return (arr);
}
