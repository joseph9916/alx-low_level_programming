#include "main.h"
#include <stddef.h>
#include <stdio.h>

/**
 * power - finds the exponential of n power j
 * @n: exponent
 * @j: power
 * Return: result
 */

unsigned int power(unsigned int n, unsigned int j)
{
	if (j == 0)
		return (1);
	else
		return (n * power(n, j - 1));
}

/**
 * binary_to_uint - convert binary to unsigned int of a binary string
 * @b: binary string b
 * Return: unsigned int result
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0, len = 0, i = 0;

	if (b == NULL)
		return (0);
	while (*b != '\0')
	{
		if (*b < '0' || *b > '9')
			return (0);
		len++;
		b++;
	}
	b--;
	while (len)
	{
		result += ((*b - '0') * power(2, i));
		b--;
		len--;
		i++;
	}
	return (result);
}
