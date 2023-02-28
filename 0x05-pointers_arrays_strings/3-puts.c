#include "main.h"

/**
 * _puts - Prints a strring to stand output
 * @str: beginning pointer of string
 */

void _puts(char *str)
{
	char *tmp_address = str;
	while (*tmp_address != '\0')
	{
		_putchar(*tmp_address);
		tmp_address++;
	}
	_putchar('\0');
	_putchar('\n');
}
