#include "main.h"

/**
 * print_times_table - prints the times tabe a * b till n
 * @n: number of times table
 */

void print_times_table(int n)
{
	int a, b;

	for (a = 0; a <= n; a++)
	{
		for (b = 0; b <= n; b++)
		{
			if (b > 0)
			{
				_putchar(',');
				_putchar(' ');
			}
			if ((a * b) / 10 == 0)
			{
				if (b > 0)
					_putchar(' ');
				_putchar('0' + ((a * b) % 10));
			}
			else
			{
				_putchar('0' + ((a * b) / 10));
				_putchar('0' + ((a * b) % 10));
			}
		}
		_putchar('\n');
	}
}
