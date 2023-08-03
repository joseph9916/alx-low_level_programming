#include "main.h"

/**
 * clear_bit - a function that sets the value of a bit to 0 at a given index.
 * @n: number
 * @index: is the index, starting from 0 of the bit you want to set
 * Return: 1 or -1 if an error occured
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 64)
		return (-1);
	i <<= index;
	if (!(i & *n))
		return (1);
	*n = *n - i;
	return (1);
}
