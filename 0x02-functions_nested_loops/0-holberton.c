#include "holberton.h"

/**
 * main - Entry point
 *
 * Return: Always 0.
 */

int main(void)
{
	char holberton[] = "Holberton\0";
	int index = 0;

	while (holberton[index] != '\0')
	{
		_putchar(holberton[index]);
		index++;
	}
	_putchar('\n');
	return (0);
}
