#include "main.h"

/**
 * puts2 - Prints a half of a string to stand output
 * by printing a character and not printing another
 * @str: beginning pointer of string
 */

void puts2(char *str)
{
	int i = 0;

	while (*str != '\0')
	{
		if (i % 2 == 0)
			_putchar(*str);
		str++;
		i++;
	}
	_putchar('\n');
}
