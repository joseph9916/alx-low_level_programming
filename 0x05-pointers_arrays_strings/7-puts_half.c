#include "main.h"

/**
 * puts_half - Prints a half of a string to stand output
 * by printing a character and not printing another
 * @str: beginning pointer of string
 */

void puts_half(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
		i++;

	i--;
	if (i % 2 == 0)
		str = str + (i / 2);
	else
		str = str + ((i - 1) / 2);

	while (*str != '\0')
	{
		_putchar(*str);
		str++;
	}
	_putchar('\n');
}
