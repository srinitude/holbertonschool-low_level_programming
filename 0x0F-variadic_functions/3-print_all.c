#include "variadic_functions.h"

/**
 * print_char - Print a character
 * @args: va_list
 */

void print_char(va_list args)
{
	printf("%c", va_arg(args, int));
}

/**
 * print_integer - Prints in integer
 * @args: va_list
 *
 */

void print_integer(va_list args)
{
	printf("%i", va_arg(args, int));
}

/**
 * print_float - Print a float
 * @args: va_list
 *
 */

void print_float(va_list args)
{
	printf("%f", va_arg(args, double));
}

/**
 * print_string - Prints a string
 * @args: va_list
 *
 */

void print_string(va_list args)
{
	char *ptr = va_arg(args, char *);

	if (ptr == NULL)
	{
		printf("(nil)");
		return;
	}
	printf("%s", ptr);
}

/**
 * print_all - Print anything
 * @format: The format to print something
 *
 */

void print_all(const char * const format, ...)
{
	print_fmt fmts[] = {
		{"c", print_char},
		{"i", print_integer},
		{"f", print_float},
		{"s", print_string},
		{NULL, NULL}
	};
	int i, j;
	va_list args;
	char *sep = "";

	va_start(args, format);
	i = 0;
	j = 0;
	while (format && format[i])
	{
		while (fmts[j].fmt != NULL)
		{
			if (*(fmts[j].fmt) == format[i])
			{
				printf("%s", sep);
				fmts[j].helper(args);
				break;
			}
			j++;
		}
		sep = ", ";
		j = 0;
		i++;
	}
	va_end(args);
	printf("\n");
}
