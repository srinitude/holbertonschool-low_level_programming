#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints every lowercase letter in alphabet.
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\0";
	int index = 0;

	while (alphabet[index] != '\0')
	{
		putchar(alphabet[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
