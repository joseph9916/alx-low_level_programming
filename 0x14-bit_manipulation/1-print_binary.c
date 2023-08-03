#include "main.h"

/**
 * print_binary - a function that prints the binary representation of a number
 * @n: number
 */

void print_binary(unsigned long int n)
{
	unsigned long int i = 1;
	int j = 1;

	if (!n)
	{
		_putchar('0');
		return;
	}
	while (i <= n && j < 64)
	{
		i <<= 1;
		j++;
	}
	if (i > n)
		i >>= 1;
	while (i)
	{
		if (i & n)
			_putchar('1');
		else
			_putchar('0');
		i >>= 1;
	}
}
