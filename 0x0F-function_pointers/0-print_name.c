#include "function_pointers.h"
#include <stddef.h>

/**
 * print_name - a function thats prints a name
 * @name: nam to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	if (f == NULL)
		return;
	f(name);
}
