#include "main.h"

/**
 * _print_sign - prints the sign of a number
 * @n: the number to check for
 * Return: 1 and print +if +ve, 0 and print 0 if 0
 * -1 and print - if negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar('0');
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
