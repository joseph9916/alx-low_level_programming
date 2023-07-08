#include "main.h"

/**
 * set_bit - a function that sets the value of a bit to 1 at a given index.
 * @n: number to set
 * @index: index to set at
 * Return: 1 if it worked, or -1 if an error occurred
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 63)
		return (-1);
	if (n == NULL)
		return (-1);
	i = i << index;

	*n = *n | i;
	return (1);
}
