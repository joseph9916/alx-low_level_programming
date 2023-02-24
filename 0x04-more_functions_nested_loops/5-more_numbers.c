#include "main.h"

/**
 * more_numbers - print the numbers 0-9;
 *
 * Return: O Always Success
 */

void more_numbers(void)
{
	int i, j;

	j = 0;

	while (j <= 9)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i >= 10)
				_putchar('1');
			_putchar('0' + (i % 10));
		}
		_putchar('\n');
		j++;
	}
}
