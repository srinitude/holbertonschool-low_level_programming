#include <stdlib.h>
#include "holberton.h"

/**
 * string_nconcat - Concat # of bytes of one str to another
 * @s1: The string to concat to
 * @s2: The string to concat from
 * @n: # of bytes to concat from s2 to s1
 *
 * Return: Pointer to new concatenated string
 *
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *concat;
	int total, len = 0;
	unsigned int i, j;

	for (i = 0; s1 && (s1[i] != '\0'); i++)
		len++;
	for (i = 0; s2 && (s2[i] != '\0') && (i < n); i++)
		len++;
	total = ++len;
	concat = malloc(sizeof(char) * total);
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1 && (s1[i] != '\0'); i++)
		concat[i] = s1[i];
	j = i;
	for (i = 0; s2 && (s2[i] != '\0') && (i < n); i++)
		concat[j++] = s2[i];
	concat[j] = '\0';
	return (concat);
}
