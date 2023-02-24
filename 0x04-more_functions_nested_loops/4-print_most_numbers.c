#include "main.h"

/**
 * print_numbers - print the numbers 0-9;
 *
 * Return: O Always Success
 */

void print_numbers(void)
{
	char c;

	for (c = '0'; c <= '9'; c++)
	{
		if (c != '2' && c != '4')
			_putchar(c);
	}
	_putchar('\n');
}
