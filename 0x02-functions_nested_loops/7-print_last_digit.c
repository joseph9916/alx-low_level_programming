#include "main.h"

/**
 * print_last_digit - prints the last digits of a number
 * @n: the number to check for
 * Return: the last digit
 */

int print_last_digit(int n)
{
	if (n >= 0)
	{
		_putchar('0' + (n % 10));
		return (n % 10);
	}
	else
	{
		_putchar('0' + (-1 * (n % 10)));
		return (-1 * (n % 10));
	}
}
