#include "variadic_functions.h"

/**
 * print_numbers - Print var func arguments
 * @separator: The separator between numbers
 * @n: The number of args to print
 *
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < (n - 1))
		{
			if (separator == NULL)
				continue;
			printf("%s", separator);
		}
		else
			printf("\n");
	}
	va_end(args);
}
