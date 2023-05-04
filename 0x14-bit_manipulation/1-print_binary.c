#include "main.h"

/**
 * print_binary - print a number in binary
 * @n: The number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	while (n > i)
		i = i << 1;
	if (!(i & n))
		i = i >> 1;
	while (i > 0)
	{
		if (i & n)
			_putchar('1');
		else
			_putchar('0');
		i = i >> 1;
	}
}
