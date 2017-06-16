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
	const char *sep;
	va_list args;

	if (separator == NULL)
		sep = "";
	else
		sep = separator;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		printf("%i", va_arg(args, int));
		if (i < (n - 1))
			printf("%s", sep);
		else
			printf("\n");
	}
	va_end(args);
}
