#include "main.h"
#include <limits.h>

/**
 * set_bit - set bit at index to 1
 * @n: number to find bit of
 * @index: index to get
 * Return: 1 if it worked else -1
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index >= sizeof(unsigned long int) * 8)
		return (-1);
	i = i << index;
	if (i <= *n * 2)
		*n = *n | i;
	else
		*n = *n + i;
	return (1);
}
