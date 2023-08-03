#include "main.h"
#include <stdio.h>

/**
 * binary_to_uint - a function that converts a binary number
 * to an unsigned int.
 * @b: a string of 0 and 1 chars
 * Return: the converted number, or 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int i;

	for (i = 0; b[i]; i++)
	{
		if (b[i] < '0' || b[i] > '9')
			return (0);
		result = 2 * result + b[i] - '0';
	}
	return (result);
}
