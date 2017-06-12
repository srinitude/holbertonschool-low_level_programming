#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include "holberton.h"

/**
 * number_check - Check if both args are #
 * @args: The args passed
 *
 * Return: 1 if both are nos, 0 if not
 */

int number_check(int count, char *args[])
{
	int i, j;

	for (i = 1; i < count; i++)
	{
		for (j = 0; args[i][j] != '\0'; j++)
		{
			if (!isdigit(args[i][j]))
				return (0);
		}
	}
	return (1);
}

/**
 * mul - Multiply numbers
 * @s1 - First string
 * @s2 - Second string
 * 
 * Return: 
 */

/**
 * main - Entry point
 * @argc: The number of arguments passes
 * @argv: The arguments passed
 *
 * Return: Always success (0)
 *
 */

int main(int argc, char *argv[])
{
	if ((number_check(argc, argv) == 0) || (argc != 3))
	{
		printf("Error\n");
		exit (98);
	}
}
