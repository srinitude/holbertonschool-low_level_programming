#include "variadic_functions.h"

/**
 * print_strings - Prints strings in variadic
 * @separator: The separator to print between strings
 * @n: The number of arguments in variadic
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	const char *sep;
	char *current;
	va_list args;

	if (separator == NULL)
		sep = "";
	else
		sep = separator;
	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		current = va_arg(args, char*);
		if (current == NULL)
			printf("(nil)");
		else
			printf("%s", current);
		if (i < (n - 1))
			printf("%s", sep);
	}
	va_end(args);
	printf("\n");
}
