#include "main.h"
#include <limits.h>

/**
 * print_binary - print a binary number
 * @n: number to print
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int j = 0;

	while (i <= n && j <= 31)
	{
		i = i << 1;
		j++;
	}
	if (i > n)
		i >>= 1;
	if (!(i))
		_putchar('0');
	while (i != 0)
	{
		if (n & i)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
