#include "holberton.h"
#include <stdlib.h>

/**
 * alloc_grid - Creates 2D int array
 * @width: Width of the array
 * @height: Height of the array
 *
 * Return: Pointer to the 2D array
 *
 */

int **alloc_grid(int width, int height)
{
	int **arr;
	int i, j;

	if ((width < 1) || (height < 1))
		return (NULL);
	arr = malloc(height * sizeof(int *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < width; i++)
	{
		arr[i] = malloc(width * sizeof(int));
		if (arr[i] == NULL)
		{
			free(arr);
			if (i != 0)
				i -= 1;
			for (; i >= 0; i--)
				free(arr[i]);
			return (NULL);
		}
	}
	for (i = 0; i < height; i++)
	{
		for (j = 0; j < width; j++)
			arr[i][j] = 0;
	}
	return (arr);
}
