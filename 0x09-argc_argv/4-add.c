#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 * main - Entry point to program
 * @argc: The number of arguments passed
 * @argv: The arguments passed
 *
 * Return: Success (0) or error (1)
 *
 */

int main(int argc, char *argv[])
{
	int i, j;
	int sum = 0;

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j] != '\0'; j++)
		{
			if (!isdigit(argv[i][j]))
			{
				printf("Error\n");
				return (1);
			}
		}
		sum += atoi(argv[i]);
	}
	printf("%i\n", sum);
	return (0);
}
