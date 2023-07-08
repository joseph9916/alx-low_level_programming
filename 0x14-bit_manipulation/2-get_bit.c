#include "main.h"

/**
 * get_bit - get a binary bit
 * @n: number to print
 * @index: index of bit
 * Return: bit
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int i = 1;

	if (index > 31)
		return (-1);
	i = i << index;
	if (i & n)
		return (1);
	return (0);
}
