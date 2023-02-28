#include "main.h"

/**
 * rev_string - Prints both string normally and in reverse to stand output
 * @s: beginning pointer of string
 */

void rev_string(char *s)
{
	char *tmp_address = s;

	while (*s != '\0')
	{
		_putchar(*s);
		s++;
	}
	while (s != tmp_address)
	{
		s--;
		_putchar(*s);
	}
	_putchar('\n');
}
