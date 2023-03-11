#include "main.h"

/**
 * times_table - prints the times tabe a * b
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
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
