#include "main.h"

/**
 * print_numbers - print the numbers 0-9;
 *
 * Return: O Always Success
 */

void print_numbers(void)
{
	char c;

	for (c = '1'; c <= '9'; c++)
	{
		_putchar(c);
	}
	_putchar('\n');
}
