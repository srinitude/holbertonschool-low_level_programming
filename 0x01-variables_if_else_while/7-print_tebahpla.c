#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints lowercase alphabet in reverse
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char rev_alphabet[] = "zyxwvutsrqponmlkjihgfedcba\0";
	int index = 0;

	while (rev_alphabet[index] != '\0')
	{
		putchar(rev_alphabet[index]);
		index++;
	}
	putchar('\n');
	return (0);
}
