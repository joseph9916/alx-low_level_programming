#include "main.h"
#include <stdio.h>

/**
 *_print_rev_recursion - uses recursion to print using a putchar function
 *in reverse
 *@s: The string to print
 */

void _print_rev_recursion(char *s)
{
	if (*s != '\0')
	{
		_print_rev_recursion(s + 1);
		putchar(*s);
	}
}
