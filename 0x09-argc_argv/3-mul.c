#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point into the program
 * @argc: The number of arguments passed
 * @argv: The arguments passed to the function
 *
 * Return: Always 0
 *
 */

int main(int argc __attribute__((unused)), char *argv[])
{
	int product;

	if (argv[1] && argv[2])
	{
		product = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", product);
	}
	else
		printf("Error\n");
	return (0);
}
