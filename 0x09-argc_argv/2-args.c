#include <stdio.h>

/**
 * main - Entry point
 * @argc: The number of arguments passed
 * @argv: The arguments passed
 *
 * Return: Always success
 *
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
