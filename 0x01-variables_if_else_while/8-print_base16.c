#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints lowercase numbers of base 16
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char hex_numbers[] = "0123456789abcdef\0";
	int index = 0;

	while (hex_numbers[index] != '\0')
	{
		putchar(hex_numbers[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
