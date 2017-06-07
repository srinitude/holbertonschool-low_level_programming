#include "holberton.h"
#include <stdlib.h>

/**
 * argstostr - Concatenates all arguements
 * @ac: Number of arguments
 * @av: The arguments themselves
 *
 * Return: Pointer to the concatenated string
 *
 */

char *argstostr(int ac, char **av)
{
	char *str;
	int i, j;
	int len, total, n = 0;

	if ((ac == 0) || (av == NULL))
		return (NULL);
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++)
			len++;
	}
	total = len + ac + 1;
	str = (char *)malloc(total * sizeof(char));
	for (i = 0; i < ac; i++)
	{
		for (j = 0; av[i][j] != '\0'; j++, n++)
			str[n] = av[i][j];
		str[n] = '\n';
		n++;
	}
	str[n] = '\0';
	return (str);
}
