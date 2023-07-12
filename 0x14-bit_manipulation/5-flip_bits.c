#include "main.h"

/**
 * count_ones - count the ones flipped
 * @no: numbber of ones flipped
 */

unsigned int count_ones(unsigned long int no)
{
	unsigned long int i = 1;
	unsigned int no_of_ones = 0;

	i = i << 63;

	while (i > 0)
	{
		if (i & no)
			no_of_ones++;
		i = i >> 1;
	}
	return (no_of_ones);
}

/**
 * flip_bits - a function that returns the number of bits you would need to
 * flip to get from one number to another.
 * @n: first number
 * @m: second number being compared
 * Return: Number of bits you would need to flip
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff;

	diff = n ^ m;

	return (count_ones(diff));
}
