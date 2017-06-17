#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print_format - Here's the print format struct
 * @fmt: The character
 * @helper: The associated helper
 *
 * Description: This struct has a format character for the type
 * of content that can be printed and the respective helper
 * to print it
 *
 */
typedef struct print_format
{
	char *fmt;
	void (*helper)(va_list);
} print_fmt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS */
