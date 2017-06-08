#include <stdlib.h>
#include "holberton.h"

/**
 * array_range - Creates an array of integers
 * @min: The min value
 * @max: The max value
 *
 * Return: Pointer to the int array
 *
 */

int *array_range(int min, int max)
{
	int *arr;
	int i, nmemb = 1, num = min;

	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		nmemb++;
	arr = malloc(sizeof(int) * nmemb);
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < nmemb; i++)
		arr[i] = num++;
	return (arr);
}
