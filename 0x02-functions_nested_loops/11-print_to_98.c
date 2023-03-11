#include "main.h"

/**
 * print_number - print n
 * @n: number
 */

void print_number(int n)
{
        /*AN interger to get the integer division of i*/
        int j = 10;

        if (n < 0)
        {
                _putchar('-');
                n = n * -1;
        }
        if (n >= 0 && n < 10)
                _putchar('0' + n);
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
                _putchar('0' + (n % 10));
	}
	_putchar(',');
	_putchar(' ');
}

/**
 * print_to_98 - print from n to 98 backward or forward
 * @n: number
 */

void print_to_98(int n)
{
	if (n >= 98)
	{
		while (n > 98)
		{
			print_number(n);
			n--;
		}
	}
	else 
	{
		while (n < 98)
		{
			print_number(n);
			n++;
		}
	}
	_putchar('9');
	_putchar('8');
	_putchar('\n');
}
