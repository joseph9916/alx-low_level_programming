#include "main.h"

/**
 * flip_bits - Write a function that returns the number of bits
 * you would need to flip to get from one number to another.
 * @n: first number
 * @m: second number
 * Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int no_of_ones, i = 1;
	unsigned int one_count = 0;

	no_of_ones = n ^ m;

	while (no_of_ones)
	{
		if (no_of_ones & i)
			one_count++;
		no_of_ones >>= 1;
	}
	return (one_count);
}
