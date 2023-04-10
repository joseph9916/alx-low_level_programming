#include "main.h"

/**
 * count_ones - count number of one bits in a number
 * @n: number to count
 * Return: number of ones
 */

unsigned int count_ones(unsigned long int n)
{
	unsigned long int i = 1;
	unsigned int j = 0;

	if (n == 0)
		return (j);
	while (i < n)
		i = i << 1;
	if (i > n)
		i = i >> 1;
	while (i != 0)
	{
		if (i & n)
			j++;
		i = i >> 1;
	}
	return (j);
}

/**
 * flip_bits - Count the difference in bits between m and n
 * @m: First number
 * @n: Second number
 * Return: Difference in bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int c;

	c = n ^ m;
	return (count_ones(c));
}
