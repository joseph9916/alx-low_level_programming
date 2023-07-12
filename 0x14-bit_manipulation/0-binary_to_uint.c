#include "main.h"

/**
 * binary_to_uint - converts binary string to a number
 * @b: binary string
 * Return: number equivalent
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int ans = 0;
	int i = 0;

	if (!(b))
		return (0);
	while (b[i] != '\0')
	{
		if (!(b[i] == '0' || b[i] == '1'))
			return (0);
		ans = 2 * ans + (b[i] - '0');
		i++;
	}
	return (ans);
}
