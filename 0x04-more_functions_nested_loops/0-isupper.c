#include "main.h"

/**
 * _isupper - Find if the input letter in an uppercase
 *
 * @c: the letter input to check
 * Return: 1 if uppercase 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
		return (1);
	else
		return (0);
}
