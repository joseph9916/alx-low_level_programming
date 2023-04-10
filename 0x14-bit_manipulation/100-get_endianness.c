#include "main.h"

/**
 * get_endianness - Finds out if a computer is little Endian or big endian
 * Return: - 1 if or 0 if not
 */

int get_endianness(void)
{
	int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x10)
		return (1);
	else
		return (0);
}
