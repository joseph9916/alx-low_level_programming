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
	int j = 10;
	int neg = 0; /*if -ve sub ´tract 1 from its absolute value*/

	if (n < 0)
	{
		neg = 1;
		_putchar('-');
		n = ((n + neg) * -1);
	}
	if (n >= 0 && n < 10)
		_putchar('0' + n + neg);
	else
	{
		while (n / j >= 10)
			j = j * 10;
		while (j >= 10)
		{
			_putchar('0' + (n / j));
			n = n % j;
			j = j / 10;
		}
		_putchar('0' + (n % 10) + neg);
	}
}
