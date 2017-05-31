#include "holberton.h"
#include <stdio.h>

/**
 * set_string - Sets value of a pointer to char
 * @s: The value to set to
 * @to: The value to overwrite
 *
 */

void set_string(char **s, char *to)
{
	*s = to;
}
