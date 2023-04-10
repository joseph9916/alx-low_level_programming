#include "main.h"
#include <stddef.h>
#include <stdlib.h>
#include <stdio.h>

/**
 * clear_bit - set bit at index to 0
 * @n: number to find bit of
 * @index: index to get
 * Return: 1 if it worked else -1
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = (1 << index);

	if (n == NULL)
	{
		free(n);
		return (-1);
	}
	if (i > *n)
	{
		return (1);
	}
	*n = *n - i;
	return (1);
}
