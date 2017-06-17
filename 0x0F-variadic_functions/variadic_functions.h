#ifndef VARIADIC_FUNCTIONS
#define VARIADIC_FUNCTIONS

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

typedef union print_val {
	char p_char;
	int p_int;
	float p_float;
	char *p_str;
} print_val;

typedef struct print_format {
	char *fmt;
	void (*helper)();
} print_fmt;

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VARIADIC_FUNCTIONS */
