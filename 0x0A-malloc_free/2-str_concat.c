#include "holberton.h"
#include <stdlib.h>

/**
 * str_concat - Concatentate two strings
 * @s1: The first string
 * @s2: The second string
 *
 * Return: Pointer with two concatenated strings
 *
 */

char *str_concat(char *s1, char *s2)
{
	char *concat;
	int i, j, total;
	char *empty = "";
	int s1_len, s2_len = 0;

	if (s1 == NULL)
		s1 = empty;
	if (s2 == NULL)
		s2 = empty;
	for (i = 0; s1[i] != '\0'; i++)
		s1_len++;
	for (i = 0; s2[i] != '\0'; i++)
		s2_len++;
	total = s1_len + s2_len + 1;
	concat = malloc(total * sizeof(char));
	if (concat == NULL)
		return (NULL);
	for (i = 0; s1 && i < s1_len; i++)
		concat[i] = s1[i];
	j = i;
	for (i = 0; s2 && i < s2_len; i++, j++)
		concat[j] = s2[i];
	concat[j] = '\0';
	return (concat);
}
