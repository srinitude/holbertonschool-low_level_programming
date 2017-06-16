#include <stdio.h>
#include "3-calc.h"

/**
 * main - Entry point
 * @argc: The number of arguments
 * @argv: The arguments passed
 *
 * Return: 0 or exit status
 *
 */

int main(int argc, char *argv[])
{
	int left, right, result;
	char *op_ptr;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	left = atoi(argv[1]);
	right = atoi(argv[3]);
	if (argv[2][1] != '\0')
	{
		printf("Error\n");
		exit(99);
	}
	switch (argv[2][0])
	{
	case '/':
	case '%':
		if (right == 0)
		{
			printf("Error\n");
			exit(100);
		}
		break;
	case '+':
	case '-':
	case '*':
		break;
	default:
		printf("Error\n");
		exit(99);
	}
	op_ptr = &(argv[2][0]);
	result = get_op_func(op_ptr)(left, right);
	printf("%i\n", result);
	return (0);
}
