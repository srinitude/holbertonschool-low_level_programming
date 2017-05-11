#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints single-digit numbers separated by commas
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char numbers[] = "0123456789\0";
	int index = 0;

	while (numbers[index] != '\0')
	{
		putchar(numbers[index]);
		if (numbers[index] != '9')
		{
			putchar(',');
			putchar(32);
		}
		index++;
	}
	putchar('\n');
	return (0);
}
