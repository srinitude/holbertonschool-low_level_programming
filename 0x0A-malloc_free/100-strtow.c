#include "holberton.h"
#include <stdlib.h>

/**
 * wrdcnt - Word count
 * @str: The string to get words from
 * @c: Initialized count to 0
 */

/**
 * strtow - Splits a string into words
 * @str: The string in question
 *
 * Return: Pointer to an array of strings
 *
 */

char **strtow(char *str)
{
	char **arr;
	int *wrd_idx;
	int i, j = 0, k = 0;
	int len = 0, words = 0, wrd_len = 0;

	wrd_idx = malloc(sizeof(*wrd_idx) * 100);
	if (wrd_idx == NULL)
		return (NULL);
	if ((str == NULL) || (*str == '\0'))
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		len++;
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			for (; str[i] == ' '; i++)
				wrd_len++;
			wrd_idx[words] = wrd_len;
			wrd_len = 0;
			words++;
		}
	}
	arr = malloc(words * sizeof(char *));
	if (arr == NULL)
		return (NULL);
	for (i = 0; i < words; i++)
	{
		arr[i] = malloc((wrd_idx[i] + 1) * sizeof(char));
		if (arr[i] == NULL)
		{
			if (i != 0)
				i -= 1;
			for (; i >= 0; i--)
				free(arr[i]);
			free(arr);
			return (NULL);
		}
	}
	for (i = 0; i < len; i++)
	{
		if (str[i] != ' ')
		{
			for (; str[i] == ' '; i++, k++)
				arr[j][k] = str[i];
			arr[j][k++] = '\0';
			k = 0;
			j++;
		}
	}
	return (arr);
}
