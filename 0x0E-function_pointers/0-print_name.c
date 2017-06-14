#include <stdlib.h>
#include "function_pointers.h"

/**
 * print_name - Prints a name
 * @name: The name to print
 * @f: The callback function to print the name
 *
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
