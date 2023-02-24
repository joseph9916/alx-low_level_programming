#include "main.h"
#include <math.h>

/**
 * print_number - Takes a number as input and prints it with putchar
 * @n: Input integer
 * Return: 0 Always (Success)
 */

void print_number(int n)
{
	/*AN interger to get the integer division of i*/
	long j = 10;

	if (n == 0)
		_putchar('0');
	else
	{
		if (n < 0)
		{
			_putchar('-');
			n = n * -1;
		}
		while (n / j >= 10)
			j = j * 10;
		while (j >= 10)
		{
			_putchar('0' + (n / j));
			n = n % j;
			j = j / 10;
		}
		_putchar('0' + (n % 10));
	}
}
