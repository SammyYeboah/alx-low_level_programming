#include <stdio.h>

/**
 * print_name - prints a name
 * @name: name to print
 * @f: function to use to print
 */

void print_name(char *name, void (*f)(char *))
{
	f(name);
}
