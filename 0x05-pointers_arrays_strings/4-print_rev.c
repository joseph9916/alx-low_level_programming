#include "main.h"

/**
 * print_rev - Prints a strring to stand output in reverse
 * @s: beginning pointer of string
 */

void print_rev(char *s)
{
	char *tmp_address = s;

	while (*s != '\0')
		s++;
	while (s != tmp_address)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
