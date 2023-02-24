#include "main.h"

/**
 * print_line - print the _*n;
 * @n: number of times to print _
 * Return: O Always Success
 */

void print_line(int n)
{

	int i;
	
	if (n > 0) 
	{
		for (i = 1; i <= n; i++)
			_putchar('_');
	}
	_putchar('\n');
}
