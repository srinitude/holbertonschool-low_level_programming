#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	long int sum;
	long int f0 = 1;
	long int f1 = 2;

	printf("%li", f0);
	printf("%li", f1);

	for (i = 2; i < 50; i++)
	{
		sum = f0 + f1;
		printf("%li\n", sum);
		f0 = f1;
		f1 = sum;
	}
	return (0);
}
