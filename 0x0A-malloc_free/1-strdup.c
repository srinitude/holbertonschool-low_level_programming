#include "holberton.h"
#include <stdlib.h>

/**
 * _strdup - Returns pointer of a string dup
 * @str: The string to duplicate
 *
 * Return: Pointer to new string or NULL
 *
 */

char *_strdup(char *str)
{
	char *dup;
	int i;
	int len = 0;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
	{
		len++;
	}
	dup = malloc(len);
	for (i = 0; str[i] != '\0'; i++)
	{
		dup[i] = str[i];
	}
	dup[i] = '\0';
	return (dup);
}
