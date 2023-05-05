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

	if (index > sizeof(unsigned long int) * 8)
		return (-1);
	i = i << index;
	if ((i > n)
		return (0);
	if (n & i)
		return (1);
	else
		return (0);
}
