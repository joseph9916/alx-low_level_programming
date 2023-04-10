#include "main.h"

/**
 * get_bit - get bit at index
 * @n: number to find bit of
 * @index: index to get
 * Return: Bit at index
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if ((i << index) > n)
		return (-1);
	if (n & (i << index))
		return (1);
	else
		return (0);
}
