#include <stdio.h>

/**
 * main - Entry point
 *
 * Description - Prints lowercase alphabet except for q and e
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	char alphabet[] = "abcdefghijklmnopqrstuvwxyz\0";
	int index = 0;

	while (alphabet[index] != '\0')
	{
		switch (alphabet[index])
		{
		case 'q':
		case 'e':
			break;
		default:
			putchar(alphabet[index]);
			break;
		}
		index++;
	}
	putchar('\n');
	return (0);
}
