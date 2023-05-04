#include "main.h"

/**
 * set_bit - set bit at index to 1
 * @n: number to find bit of
 * @index: index to get
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = (1 << index);

	if (i > *n)
		return (-1);
	*n = *n | i;
	return (1);
}
