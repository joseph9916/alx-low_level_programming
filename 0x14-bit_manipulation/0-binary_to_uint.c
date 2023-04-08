#include "main.h"
#include <stddef.h>
#include <string.h>

/**
 * binary_to_uint - Convert binary characters to Unsigned int numbers
 * @b: string to print in binary
 * Return: unsigned int number
 */

unsigned int binary_to_uint(const char *b)
{
	int k, i, pw = 1, len;
	unsigned int result = 0;

	len = strlen(b);
	k = len - 1;

	if (b == NULL)
		return (0);
	while (k >= 0)
	{
		if (b[k] < 48 || b[k] > 57)
			return (0);
		for (i = 1; i < len - k; i++)
			pw *= 2;
		result += ((b[k] - 48) * pw);
		k--;
		pw = 1;
	}
	return (result);
}
