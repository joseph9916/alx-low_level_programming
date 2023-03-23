#include "function_pointers.h"

/**
 * print_name - a function thats prints a name
 * @name: nam to print
 * @f: function pointer
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}
