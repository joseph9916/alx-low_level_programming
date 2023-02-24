#include "main.h"

/**
 * print_square - print the # as a square;
 * @size: number of times and lines to print #
 * Return: O Always Success
 */

void print_square(int size)
{

	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
