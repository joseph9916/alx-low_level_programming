#include "main.h"
#include <limits.h>

/**
 * clear_bit - clear the bit at index
 * @n: pointer to the number
 * @index: index to clear
 * Return: number or -1 if not possible
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > (sizeof(unsigned long int) * 8))
		return (-1);
	i = i << index;
	if (i > *n)
		return (1);
	if (*n & i)
		*n -= i;
	return (1);
}
