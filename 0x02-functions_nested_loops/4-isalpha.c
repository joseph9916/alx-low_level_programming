#include "main.h"

/**
 * _isalpha - checks if a character is an alphabet
 * @c: the character to check the case for
 * Return: 1 if lowercase, 0 if uppercase
 */

int _isalpha(int c)
{
	if ((c > 'a' && c <= 'z') || (c > 'A' && c <= 'A'))
		return (1);
	else
		return (0);
}
