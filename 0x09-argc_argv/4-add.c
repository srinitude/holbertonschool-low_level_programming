#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point to program
 * @argc: The number of arguments passed
 * @argv: The arguments passed
 *
 * Return: Always Success
 *
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	if (argc == 1)
		printf("0\n");
	for (i = 1; i < argc; i++)
	{
		if ((atoi(argv[i]) == 0) && (argv[i] != 0))
		{
			printf("Error\n");
			return (1);
		}
		else
			sum += atoi(argv[i]);
		if (i == (argc - 1))
			printf("%i\n", sum);
	}
	return (0);
}
