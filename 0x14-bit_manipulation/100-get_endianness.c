#include "main.h"

/**
 * get_endianness - Write a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	unsigned int val = 0x76543210;
	char *c = (char *) &val;

	if (*c == 0x10)
		return (1);
	return (0);
}
