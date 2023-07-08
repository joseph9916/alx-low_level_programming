#include "main.h"

/**
 * get_endianness -  a function that checks the endianness.
 * Return: 0 if big endian, 1 if little endian
 */

int get_endianness(void)
{
	int x = 0x76543210;
	char *c = (char *) &x;

	if (*c == 0x76)
		return (0);
	return (1);
}
