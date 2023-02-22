#include "main.h"

/**
 * times_table - prints the times tabe
 * a:b
 */

void times_table(void)
{
	int a, b;

	for (a = 0; a <= 9; a++)
	{
		for (b = 0; b <= 9; b++)
		{
			_putchar('0' + ((a * b) / 10));
			_putchar('0' + ((a * b) % 10));
		}
		_putchar('$');
		_putchar('\n');
	}
}
