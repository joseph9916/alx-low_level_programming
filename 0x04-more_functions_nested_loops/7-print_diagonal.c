#include "main.h"

/**
 * print_diagonal - print the \ as a diagonal;
 * @n: number lines to print \
 * Return: O Always Success
 */

void print_diagonal(int n)
{

	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar('\\');
			_putchar('\n');
		}
	}
}
